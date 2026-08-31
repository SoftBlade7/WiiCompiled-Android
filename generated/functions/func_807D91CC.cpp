#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D91CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807D91CC;

loc_807D91CC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = 1127219200;
    r30 = r3;
    r31 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r31 = (r31 + 29696);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    // inline leaf 0x80590DD0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    // end of inlined leaf 0x80590DD0
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 408u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 376u, (r31 + 376));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 320u, (r31 + 320));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_807D921C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9228;
    }
}

loc_807D9220:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 324u, (r31 + 324));
    goto loc_807D9240;
}

loc_807D9228:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 400u, (r31 + 400));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 324u, (r31 + 324));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807D9240:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 324u, (r31 + 324));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D9248:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D9250;
    }
}

loc_807D924C:
{
    goto loc_807D9264;
}

loc_807D9250:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r31 + 292));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D9258:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9260;
    }
}

loc_807D925C:
{
    goto loc_807D9264;
}

loc_807D9260:
{
    f1.d = f0.d;
}

loc_807D9264:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 700));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 700), f0.d);
    // inline leaf 0x80590DD0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    // end of inlined leaf 0x80590DD0
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 320u, (r31 + 320));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 376u, (r31 + 376));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_807D928C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9298;
    }
}

loc_807D9290:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 384u, (r31 + 384));
    goto loc_807D92B0;
}

loc_807D9298:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 404u, (r31 + 404));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 384u, (r31 + 384));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807D92B0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 384u, (r31 + 384));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D92B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D92C0;
    }
}

loc_807D92BC:
{
    goto loc_807D92D4;
}

loc_807D92C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D92C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D92D0;
    }
}

loc_807D92CC:
{
    goto loc_807D92D4;
}

loc_807D92D0:
{
    f1.d = f0.d;
}

loc_807D92D4:
{
    r3 = MemoryInline::FlatRead32((r30 + 720));
    MemoryInline::FlatWriteFloat32((r30 + 736), f1.d);
    r0 = (r3 + 1);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 184u, (r31 + 184));
    MemoryInline::FlatWrite32((r30 + 720), r0);
    goto loc_807D9308;
}

loc_807D92EC:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 700));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 700), f0.d);
}

loc_807D9308:
{
    r3 = MemoryInline::FlatRead32((r30 + 696));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 700));
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D9324:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D92EC;
    }
}

loc_807D932C:
{
    goto loc_807D933C;
}

loc_807D9330:
{
    r0 = MemoryInline::FlatRead32((r30 + 720));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r30 + 720), r0);
}

loc_807D933C:
{
    r3 = MemoryInline::FlatRead32((r30 + 716));
    r0 = MemoryInline::FlatRead32((r30 + 720));
}

loc_807D9348:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_807D9330;
    }
}

loc_807D934C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 700));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D9358:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D9364;
    }
}

loc_807D935C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_807D9364:
{
    r3 = (r1 + 12);
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 5u>(ctx, r3, PPC_PsFromScalarInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 700));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D937C:
{
    MemoryInline::FlatWrite32((r30 + 704), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D938C;
    }
}

loc_807D9384:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_807D938C:
{
    r3 = (r1 + 8);
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 5u>(ctx, r3, PPC_PsFromScalarInline(f1.d));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 184u, (r31 + 184));
    r4 = MemoryInline::FlatRead16((r1 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead32((r30 + 704));
    r4 = (r4 + 1);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 700));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 ^ -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D93B8:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWrite32((r30 + 708), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 712), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D93F0;
    }
}

loc_807D93E4:
{
    r0 = MemoryInline::FlatRead32((r30 + 696));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 704), r0);
}

loc_807D93F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 696));
    r0 = MemoryInline::FlatRead32((r30 + 708));
}

loc_807D93FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_807D9408;
    }
}

loc_807D9400:
{
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r30 + 708), r0);
}

loc_807D9408:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    // inline leaf 0x80590DD0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    // end of inlined leaf 0x80590DD0
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 212u, (r31 + 212));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_807D9420:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9428;
    }
}

loc_807D9424:
{
    goto loc_807D943C;
}

loc_807D9428:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_807D943C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807D9444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D944C;
    }
}

loc_807D9448:
{
    goto loc_807D9460;
}

loc_807D944C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807D9454:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D945C;
    }
}

loc_807D9458:
{
    goto loc_807D9460;
}

loc_807D945C:
{
    f0.d = f3.d;
}

loc_807D9460:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r28 = 1;
    MemoryInline::FlatWriteFloat32((r30 + 732), f0.d);
    r29 = 0;
    r27 = MemoryInline::FlatRead16((r3 + 250));
    r4 = r27;
    // inline leaf 0x807D1BF8 (7 guest instruction(s))
    r0 = (6 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(6) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = 6;
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x807D1BF8
}

loc_807D9480:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807D94A8;
    }
}

loc_807D9484:
{
}

loc_807D9488:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(7))) {
        goto loc_807D94A8;
    }
}

loc_807D948C:
{
}

loc_807D9490:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(29))) {
        goto loc_807D94A8;
    }
}

loc_807D9494:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = r27;
    // inline leaf 0x807D1CB0 (7 guest instruction(s))
}

loc_inl5_0x807D1CB0:
{
}

loc_inl5_0x807D1CB4:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(27))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x807D1CBC:
{
}

loc_inl5_0x807D1CC0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(28))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x807D1CC4:
{
    r3 = 1;
    goto loc_inl5_cont_807D1CB0;
}

loc_inl5_return:
{
}

loc_inl5_cont_807D1CB0:
{
    // end of inlined leaf 0x807D1CB0
}

loc_807D94A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D94AC;
    }
}

loc_807D94A8:
{
    r29 = 1;
}

loc_807D94AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807D94B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9530;
    }
}

loc_807D94B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = r27;
    r29 = 0;
    // inline leaf 0x807D1C78 (7 guest instruction(s))
}

loc_inl6_0x807D1C78:
{
}

loc_inl6_0x807D1C7C:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(31))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x807D1C84:
{
}

loc_inl6_0x807D1C88:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(39))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x807D1C8C:
{
    r3 = 1;
    goto loc_inl6_cont_807D1C78;
}

loc_inl6_return:
{
}

loc_inl6_cont_807D1C78:
{
    // end of inlined leaf 0x807D1C78
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D94C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9524;
    }
}

loc_807D94CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r27 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807D94F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r27);
    f31.d = f1.d;
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807D950Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807D9510:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D951C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9524;
    }
}

loc_807D9520:
{
    r29 = 1;
}

loc_807D9524:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807D9528:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9530;
    }
}

loc_807D952C:
{
    r28 = 0;
}

loc_807D9530:
{
}

loc_807D9534:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 836));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D9544;
    }
}

loc_807D953C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 196));
    goto loc_807D9548;
}

loc_807D9544:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 176));
}

loc_807D9548:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D954C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9590;
    }
}

loc_807D9550:
{
}

loc_807D9554:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D9560;
    }
}

loc_807D9558:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 196));
    goto loc_807D9564;
}

loc_807D9560:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 176));
}

loc_807D9564:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D9570:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9588;
    }
}

loc_807D9574:
{
}

loc_807D9578:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D9580;
    }
}

loc_807D957C:
{
    goto loc_807D95CC;
}

loc_807D9580:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D95CC;
}

loc_807D9588:
{
    f2.d = f0.d;
    goto loc_807D95CC;
}

loc_807D9590:
{
}

loc_807D9594:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D95A0;
    }
}

loc_807D9598:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 196));
    goto loc_807D95A4;
}

loc_807D95A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 176));
}

loc_807D95A4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D95B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D95C8;
    }
}

loc_807D95B4:
{
}

loc_807D95B8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D95C0;
    }
}

loc_807D95BC:
{
    goto loc_807D95CC;
}

loc_807D95C0:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D95CC;
}

loc_807D95C8:
{
    f2.d = f0.d;
}

loc_807D95CC:
{
}

loc_807D95D0:
{
    MemoryInline::FlatWriteFloat32((r30 + 836), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 840));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D95E4;
    }
}

loc_807D95DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D95E8;
}

loc_807D95E4:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
}

loc_807D95E8:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D95EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D962C;
    }
}

loc_807D95F0:
{
}

loc_807D95F4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D9600;
    }
}

loc_807D95F8:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D9604;
}

loc_807D9600:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
}

loc_807D9604:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D9610:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D9664;
    }
}

loc_807D9614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807D9618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9624;
    }
}

loc_807D961C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D9664;
}

loc_807D9624:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807D9664;
}

loc_807D962C:
{
}

loc_807D9630:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807D963C;
    }
}

loc_807D9634:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D9640;
}

loc_807D963C:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
}

loc_807D9640:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807D964C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D9664;
    }
}

loc_807D9650:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807D9654:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9660;
    }
}

loc_807D9658:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    goto loc_807D9664;
}

loc_807D9660:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
}

loc_807D9664:
{
    MemoryInline::FlatWriteFloat32((r30 + 840), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D91CC func_807D91CC preserves=false fpr_mask=0x80000000
