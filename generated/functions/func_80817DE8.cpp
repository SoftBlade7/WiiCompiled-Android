#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80817DE8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80817DE8;

loc_80817DE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    ctx->lr = 0x80817E0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081A980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r5 = 0x808D0000u;
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r5 = (r5 + 26380);
    r3 = MemoryInline::FlatRead32((r30 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80817E24:
{
    r0 = MemoryInline::FlatRead32((r30 + 56));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 276), r4);
    MemoryInline::FlatWrite32((r30 + 280), r3);
    MemoryInline::FlatWrite32((r30 + 284), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80817E44;
    }
}

loc_80817E3C:
{
    r3 = (r30 + 72);
    goto loc_80817E74;
}

loc_80817E44:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r30 + 88);
    ctx->lr = 0x80817E58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80817E74:
{
    r4 = 0x808B0000u;
    r7 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -19252));
    r5 = 0x808B0000u;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r5 + -19220);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r30 + 260);
    MemoryInline::FlatWrite32((r30 + 288), r7);
    r4 = 16;
    MemoryInline::FlatWrite32((r30 + 292), r6);
    MemoryInline::FlatWrite32((r30 + 296), r0);
    MemoryInline::FlatWriteFloat32((r30 + 300), f0.d);
    r6 = MemoryInline::FlatRead32(r31);
    r6 = MemoryInline::FlatRead16((r6 + 42));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80817EB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r6 = 2;
    r0 = MemoryInline::FlatRead32((r3 + 2924));
}

loc_80817ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80817EE0;
    }
}

loc_80817ED4:
{
}

loc_80817ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80817EEC;
    }
}

loc_80817EDC:
{
    goto loc_80817EF4;
}

loc_80817EE0:
{
    r4 = 3;
    r6 = 4;
    goto loc_80817EF4;
}

loc_80817EEC:
{
    r4 = 5;
    r6 = 6;
}

loc_80817EF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_80817EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80817F08;
    }
}

loc_80817F00:
{
    r4 = 1;
    r6 = 2;
}

loc_80817F08:
{
    r5 = MemoryInline::FlatRead32(r31);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 510);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 510);
    r3 = r30;
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead16((r4 + 42));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r4 * 60);
    MemoryInline::FlatWrite32((r30 + 304), r5);
    r4 = MemoryInline::FlatRead32(r31);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 60);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r30 + 308), r5);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r4 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r5 + r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 312), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80817DE8 func_80817DE8 preserves=true fpr_mask=0x00000000
