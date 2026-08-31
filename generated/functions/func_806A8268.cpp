#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805147D4_statefree(uint32_t, uint32_t);

extern "C" void func_806A8268(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t addr_lfsx_80537B88_loc_1 = 0;
    uint32_t addr_lfsx_80537B88_loc_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_806A8268;

loc_806A8268:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r3;
    r3 = (r1 + 56);
    r4 = (r31 + 1780);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r4 = (r31 + 1780);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_1 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r4 = (r31 + 1780);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r5 = 2;
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_2 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_2);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805147D4u) && KnownTranslatedCpuCall<0x805147D4u>::kAvailable && !KnownTranslatedCpuCall<0x805147D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805147D4u>()) {
        func_805147D4_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x805147D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = (r31 + 1780);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r5 = 3;
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80537B80u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r7 = (r1 + 72);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r8 = (r31 + 1980);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    r5 = 2;
    r6 = 5;
    r9 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    r4 = MemoryInline::FlatRead32((r31 + 1324));
    ctx->lr = 0x806A8348u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r4 = MemoryInline::FlatRead32((r31 + 1324));
    r3 = r31;
    r7 = (r1 + 72);
    r8 = (r31 + 1992);
    r5 = 5;
    r6 = 8;
    r9 = 1;
    ctx->lr = 0x806A8368u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF8 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A8268 func_806A8268 preserves=true fpr_mask=0x00000000
