#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FAFB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806FB178_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FAFB4;

loc_806FAFB4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = MemoryInline::FlatRead32((r3 + 84));
    r31 = 0x808A0000u;
    r29 = r3;
    r4 = MemoryInline::FlatRead32(r5);
    r3 = r5;
    r31 = (r31 + 4344);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r30 = (r0 & 1);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r28 = (r28_rot_0 & 1);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r27 = (r27_rot_0 & 1);
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    r3 = 0x809C0000u;
    f2.d = f1.d;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_806FB014:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_806FB020;
    }
}

loc_806FB018:
{
}

loc_806FB01C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(7))) {
        goto loc_806FB0A4;
    }
}

loc_806FB020:
{
}

loc_806FB024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_806FB034;
    }
}

loc_806FB028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806FB02C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FB0A4;
    }
}

loc_806FB030:
{
    goto loc_806FB290;
}

loc_806FB034:
{
    r3 = MemoryInline::FlatRead32((r29 + 84));
    // inline leaf 0x805914E4 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 156));
    // end of inlined leaf 0x805914E4
    f2.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f0.d = MemoryInline::FlatReadFloat64((r31 + 136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB04C:
{
    MemoryInline::FlatWriteFloat32((r29 + 36), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB074;
    }
}

loc_806FB054:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = 0x808A0000u;
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r3 + 6);
    MemoryInline::FlatWrite32((r29 + 68), r0);
    goto loc_806FB090;
}

loc_806FB074:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = 0x808A0000u;
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (r3 + 5);
    MemoryInline::FlatWrite32((r29 + 68), r0);
}

loc_806FB090:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_806FB290;
}

loc_806FB0A4:
{
    r3 = MemoryInline::FlatRead32((r29 + 80));
    r0 = MemoryInline::FlatRead8((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FB0B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FB0E4;
    }
}

loc_806FB0B4:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    MemoryInline::FlatWriteFloat32((r29 + 72), f1.d);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    MemoryInline::FlatWriteFloat32((r29 + 36), f0.d);
    r0 = (r3 + 6);
    MemoryInline::FlatWrite32((r29 + 68), r0);
    goto loc_806FB290;
}

loc_806FB0E4:
{
}

loc_806FB0E8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_806FB1A4;
    }
}

loc_806FB0EC:
{
}

loc_806FB0F0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_806FB1A4;
    }
}

loc_806FB0F4:
{
}

loc_806FB0F8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_806FB1A4;
    }
}

loc_806FB0FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB104:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB1A4;
    }
}

loc_806FB108:
{
    r3 = MemoryInline::FlatRead32((r29 + 84));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2048);
}

loc_806FB11C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806FB1A4;
    }
}

loc_806FB120:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB138:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB140;
    }
}

loc_806FB13C:
{
    f1.d = f0.d;
}

loc_806FB140:
{
    MemoryInline::FlatWriteFloat32((r29 + 36), f1.d);
    r3 = MemoryInline::FlatRead32((r29 + 84));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r31 + 148));
    r0 = 16;
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r3 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_806FB168:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806FB170;
    }
}

loc_806FB16C:
{
    r0 = r3;
}

loc_806FB170:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + 36);
    addr_lfsx_806FB178_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806FB178_loc_0);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    r3 = MemoryInline::FlatRead32((r29 + 80));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 304));
    ctr = r12;
    ctx->lr = 0x806FB194u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 68), r3);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_806FB290;
}

loc_806FB1A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_806FB1A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FB1C0;
    }
}

loc_806FB1AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_806FB1B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FB1D8;
    }
}

loc_806FB1B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB1BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB1D8;
    }
}

loc_806FB1C0:
{
    f1.d = f2.d;
    r3 = r29;
    ctx->lr = 0x806FB1CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FB444u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_806FB290;
}

loc_806FB1D8:
{
    f3.d = std::fabs(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r3 = r29;
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FB640u>(ctx);
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 84));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB204:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB230;
    }
}

loc_806FB208:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = (r3 + 5);
    MemoryInline::FlatWrite32((r29 + 68), r0);
    goto loc_806FB288;
}

loc_806FB230:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB238:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB264;
    }
}

loc_806FB23C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r29 + 68), r0);
    goto loc_806FB288;
}

loc_806FB264:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    r0 = (r3 + 3);
    MemoryInline::FlatWrite32((r29 + 68), r0);
}

loc_806FB288:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_806FB290:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = 0x808A0000u;
    r4 = (r4 + 4528);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r0 = (r0 * 12);
    r3 = (r29 + 48);
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80717D84u>(ctx);
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 160));
    r3 = MemoryInline::FlatRead32((r29 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r4 = MemoryInline::FlatRead32((r29 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f1.d = f31.d;
    ctx->lr = 0x806FB2D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8070C564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r29 + 76), static_cast<uint8_t>(r30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FAFB4 func_806FAFB4 preserves=false fpr_mask=0x80000000
