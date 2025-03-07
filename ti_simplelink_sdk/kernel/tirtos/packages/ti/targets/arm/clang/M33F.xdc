/*
 *  Copyright 2020 by Texas Instruments Incorporated.
 *
 */

/*
 * Copyright (c) 2018-2020, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*!
 *  ======== M33F.xdc ========
 *  Cortex M33 with floating point unit, little endian thumb2 (ELF)
 */
metaonly module M33F inherits ti.targets.arm.clang.ITarget {
    override readonly config string name        = "M33F";
    override readonly config string suffix      = "m33f";
    override readonly config string isa         = "v8M";
    override config string platform   = "ti.platforms.cortexM:MTL1_VSOC:1";

    override readonly config xdc.bld.ITarget2.Command cc = {
        cmd:  "tiarmclang -c",
        opts: "-mcpu=cortex-m33 -mfloat-abi=hard -mfpu=fpv5-sp-d16"
    };

    override readonly config xdc.bld.ITarget2.Command asm = {
        cmd:  "tiarmclang -c -x assembler-with-cpp",
        opts: "-mcpu=cortex-m33 -mfloat-abi=hard -mfpu=fpv5-sp-d16"
    };

    override readonly config xdc.bld.ITarget2.Command lnk = {
        cmd:  "tiarmclang",
        opts: "-mcpu=cortex-m33 -mfloat-abi=hard -mfpu=fpv5-sp-d16"
    };
}
/*
 *  @(#) ti.targets.arm.clang; 1, 0, 0,; 6-12-2020 15:20:08; /db/ztree/library/trees/xdctargets/xdctargets-w18/src/ xlibrary

 */

