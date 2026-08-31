#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80510AB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80510AB8;

loc_80510AB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r0 = MemoryInline::FlatRead16((r5 + 70));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80510AD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80510AE4;
    }
}

loc_80510ADC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
}

loc_80510AE4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead16((r3 + 70));
    r6 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r3 = 0x80890000u;
    r5 = MemoryInline::FlatRead32((r6 + 24576));
    f1.d = MemoryInline::FlatReadFloat64((r4 + -1856));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1864));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r4 = 1172832256;
    r5 = 65536;
    r0 = (r4 + -19853);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r4 = 274857984;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    r5 = (r5 + -5536);
    r0 = (r4 + 19923);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r4 = (r4_rot_0 & 65535);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r4));
    r4 = (r4 * r5);
    r3 = (r3 - r4);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = (r0 * 1000);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000018 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80510AB8 func_80510AB8 preserves=true fpr_mask=0x00000000
