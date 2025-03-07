/* 
 *  Copyright (c) 2017 Texas Instruments and others.
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 *
 * */
/*!
 *  ======== M33 ========
 *  IAR M33 target
 */
metaonly module M33 inherits ITarget
{
    override readonly config String name = "M33";

    override readonly config String suffix = "rm33";

    override readonly config String isa  = "v8M";

    override config string platform  = "ti.platforms.cortexM:FVP_MPS2:1";

    /*!
     *  ======== cc ========
     *  The command used to compile C/C++ source files into object files
     */
    override readonly config Command cc = {
        cmd: "iccarm",
        opts: "--aeabi --cpu=Cortex-M33 --diag_suppress=Pa050,Go005 --endian=little -e --thumb"
    };

    /*!
     *  ======== asm ========
     *  The command used to assembles assembly source files into object files
     */
    override readonly config Command asm = {
        cmd: "iasmarm",
        opts: "--cpu Cortex-M33 --endian little "
    };

    /*!
     *  ======== lnk ========
     *  The command used to link executables.
     */
    override readonly config Command lnk = {
        cmd: "ilinkarm",
        opts: "--cpu=Cortex-M33"
    };
}
/*
 *  @(#) iar.targets.arm; 1, 0, 0,; 6-12-2020 15:19:53; /db/ztree/library/trees/xdctargets/xdctargets-w18/src/ xlibrary

 */

