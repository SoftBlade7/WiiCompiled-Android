#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B0E04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B0E04;

loc_806B0E04:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = 0x808A0000u;
    r31 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r4 + -10592));
    r28 = r31;
    r29 = 0;
    r30 = 0;
}

loc_806B0E38:
{
    r3 = MemoryInline::FlatRead32((r28 + 728));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0E40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0E64;
    }
}

loc_806B0E44:
{
    r4 = 1;
    ctx->lr = 0x806B0E4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r29);
    MemoryInline::FlatWrite8((r4 + 922), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 728));
    ctx->lr = 0x806B0E5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r28 + 1188), f1.d);
    goto loc_806B0E70;
}

loc_806B0E64:
{
    r3 = (r31 + r29);
    MemoryInline::FlatWrite8((r3 + 922), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 1188), f31.d);
}

loc_806B0E70:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_806B0E7C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(16))) {
        goto loc_806B0E38;
    }
}

loc_806B0E80:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
    r29 = 18;
}

loc_806B0E8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806B0E98;
    }
}

loc_806B0E90:
{
    r0 = 18;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r29 = (static_cast<int32_t>(r0) >> 1);
}

loc_806B0E98:
{
    r3 = 0x808A0000u;
    r28 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r30 = 0;
    goto loc_806B0EF0;
}

loc_806B0EB0:
{
    r3 = MemoryInline::FlatRead32((r28 + 792));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0EDC;
    }
}

loc_806B0EBC:
{
    r4 = 1;
    ctx->lr = 0x806B0EC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 938), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 792));
    ctx->lr = 0x806B0ED4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r28 + 1252), f1.d);
    goto loc_806B0EE8;
}

loc_806B0EDC:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 938), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 1252), f31.d);
}

loc_806B0EE8:
{
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_806B0EF0:
{
}

loc_806B0EF4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r29))) {
        goto loc_806B0EB0;
    }
}

loc_806B0EF8:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B0F00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B0F74;
    }
}

loc_806B0F04:
{
    r3 = 0x808A0000u;
    r29 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r28 = 0;
    r30 = 0;
}

loc_806B0F1C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1328));
    r3_addr_2 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0F28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0F50;
    }
}

loc_806B0F2C:
{
    r4 = 1;
    ctx->lr = 0x806B0F34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 1340), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 1328));
    r3_addr_3 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctx->lr = 0x806B0F48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r29 + 1408), f1.d);
    goto loc_806B0F5C;
}

loc_806B0F50:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 1340), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r29 + 1408), f31.d);
}

loc_806B0F5C:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
}

loc_806B0F68:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(36))) {
        goto loc_806B0F1C;
    }
}

loc_806B0F70:
{
    goto loc_806B0FE8;
}

loc_806B0F74:
{
}

loc_806B0F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806B0FE8;
    }
}

loc_806B0F7C:
{
    r3 = 0x808A0000u;
    r29 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r28 = 0;
    r30 = 0;
}

loc_806B0F94:
{
    r3 = MemoryInline::FlatRead32((r31 + 1556));
    r3_addr_6 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0FA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0FC8;
    }
}

loc_806B0FA4:
{
    r4 = 1;
    ctx->lr = 0x806B0FACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 1568), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 1556));
    r3_addr_7 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctx->lr = 0x806B0FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r29 + 1628), f1.d);
    goto loc_806B0FD4;
}

loc_806B0FC8:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 1568), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r29 + 1628), f31.d);
}

loc_806B0FD4:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
}

loc_806B0FE0:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(28))) {
        goto loc_806B0F94;
    }
}

loc_806B0FE8:
{
    r3 = 0x808A0000u;
    r28 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r30 = 0;
}

loc_806B0FFC:
{
    r3 = MemoryInline::FlatRead32((r28 + 496));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B1004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B1028;
    }
}

loc_806B1008:
{
    r4 = 1;
    ctx->lr = 0x806B1010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 864), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 496));
    ctx->lr = 0x806B1020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r28 + 956), f1.d);
    goto loc_806B1034;
}

loc_806B1028:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 864), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 956), f31.d);
}

loc_806B1034:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_806B1040:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(44))) {
        goto loc_806B0FFC;
    }
}

loc_806B1044:
{
    r3 = 0x808A0000u;
    r28 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r30 = 0;
}

loc_806B1058:
{
    r3 = MemoryInline::FlatRead32((r28 + 672));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B1060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B1084;
    }
}

loc_806B1064:
{
    r4 = 1;
    ctx->lr = 0x806B106Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 908), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 672));
    ctx->lr = 0x806B107Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r28 + 1132), f1.d);
    goto loc_806B1090;
}

loc_806B1084:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 908), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 1132), f31.d);
}

loc_806B1090:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_806B109C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(14))) {
        goto loc_806B1058;
    }
}

loc_806B10A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B10A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B111C;
    }
}

loc_806B10AC:
{
    r3 = 0x808A0000u;
    r29 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r28 = 0;
    r30 = 0;
}

loc_806B10C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 1324));
    r3_addr_11 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B10D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B10F8;
    }
}

loc_806B10D4:
{
    r4 = 1;
    ctx->lr = 0x806B10DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 1332), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 1324));
    r3_addr_12 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    ctx->lr = 0x806B10F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r29 + 1376), f1.d);
    goto loc_806B1104;
}

loc_806B10F8:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 1332), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r29 + 1376), f31.d);
}

loc_806B1104:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(8));
}

loc_806B1110:
{
    r28 = (r28 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B10C4;
    }
}

loc_806B1118:
{
    goto loc_806B1190;
}

loc_806B111C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806B1120:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1190;
    }
}

loc_806B1124:
{
    r3 = 0x808A0000u;
    r28 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -10592));
    r27 = 0;
    r29 = 0;
    r30 = 0;
}

loc_806B113C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1552));
    r3_addr_15 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B1148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B1170;
    }
}

loc_806B114C:
{
    r4 = 1;
    ctx->lr = 0x806B1154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802241F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + r27);
    MemoryInline::FlatWrite8((r4 + 1560), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 1552));
    r3_addr_16 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_16);
    ctx->lr = 0x806B1168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80224158u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r28 + 1596), f1.d);
    goto loc_806B117C;
}

loc_806B1170:
{
    r3 = (r31 + r27);
    MemoryInline::FlatWrite8((r3 + 1560), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 1596), f31.d);
}

loc_806B117C:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(8));
}

loc_806B1188:
{
    r29 = (r29 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B113C;
    }
}

loc_806B1190:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 32);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806B0E04 func_806B0E04 preserves=false fpr_mask=0x80000000
