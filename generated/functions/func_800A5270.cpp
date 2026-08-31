#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A5270;

loc_800A5270:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 116), r29);
    MemoryInline::FlatWriteRam32((r1 + 112), r28);
    r28 = r5;
    r5 = 0;
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x800A52B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r1 + 39);
    r29 = (r0 & -32);
    r5 = 64;
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800A52D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(64));
}

loc_800A52DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A52E8;
    }
}

loc_800A52E0:
{
    r3 = 0;
    goto loc_800A5414;
}

loc_800A52E8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + -1381171200);
}

loc_800A52F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21581))) {
        goto loc_800A5300;
    }
}

loc_800A52F8:
{
    r0 = 0;
    goto loc_800A532C;
}

loc_800A5300:
{
    r4 = MemoryInline::FlatRead16((r29 + 6));
}

loc_800A5308:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(256))) {
        goto loc_800A5314;
    }
}

loc_800A530C:
{
    r0 = 0;
    goto loc_800A532C;
}

loc_800A5314:
{
    r0 = (256 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(256) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = 256;
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_800A532C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A5330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A533C;
    }
}

loc_800A5334:
{
    r3 = 0;
    goto loc_800A5414;
}

loc_800A533C:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_800A5344:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A5350;
    }
}

loc_800A5348:
{
    r3 = 0;
    goto loc_800A5414;
}

loc_800A5350:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 0;
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r12 = MemoryInline::FlatRead32((r12 + 68));
    r29 = (r6 + r0);
    ctr = r12;
    ctx->lr = 0x800A5378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r31;
    r5 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800A5394u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r29));
}

loc_800A5398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A53A4;
    }
}

loc_800A539C:
{
    r3 = 0;
    goto loc_800A5414;
}

loc_800A53A4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + -1381171200);
}

loc_800A53B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21581))) {
        goto loc_800A53BC;
    }
}

loc_800A53B4:
{
    r0 = 0;
    goto loc_800A53E8;
}

loc_800A53BC:
{
    r4 = MemoryInline::FlatRead16((r31 + 6));
}

loc_800A53C4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(256))) {
        goto loc_800A53D0;
    }
}

loc_800A53C8:
{
    r0 = 0;
    goto loc_800A53E8;
}

loc_800A53D0:
{
    r0 = (256 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(256) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = 256;
    r3 = (r3 | ~r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_800A53E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A53EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A5410;
    }
}

loc_800A53F0:
{
    MemoryInline::FlatWrite32((r30 + 4), r31);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r3 = (r0 + r31);
    MemoryInline::FlatWrite32((r30 + 8), r3);
    r5 = (r3 + 8);
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r4 = MemoryInline::FlatRead32((r5 + 4));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl0_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800AD0C0;
    }
}

loc_inl0_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
}

loc_800A5410:
{
    r3 = 1;
}

loc_800A5414:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r29 = MemoryInline::FlatRead32((r1 + 116));
    r28 = MemoryInline::FlatRead32((r1 + 112));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A5270 func_800A5270 preserves=true fpr_mask=0x00000000
