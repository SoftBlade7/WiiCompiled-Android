#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8087A138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r0_subfe_rb_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8087A138;

loc_8087A138:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r26 = MemoryInline::FlatRead32((r3 + 384));
    r0 = -1;
    r25 = r3;
}

loc_8087A16C:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r0))) {
        goto loc_8087A174;
    }
}

loc_8087A170:
{
    r26 = (r26 + 1);
}

loc_8087A174:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 376));
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 372));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8896));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 376), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8087A190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087A198;
    }
}

loc_8087A194:
{
    MemoryInline::FlatWriteFloat32((r3 + 376), f0.d);
}

loc_8087A198:
{
    r30 = 0x808B0000u;
    r3 = 0x808B0000u;
    f30.d = MemoryInline::FlatReadFloat64((r3 + 9328));
    r27 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 8896));
    r28 = -1;
    r29 = 1127219200;
    r31 = 1;
    goto loc_8087A368;
}

loc_8087A1BC:
{
    r5 = MemoryInline::FlatRead32((r25 + 356));
    r0 = MemoryInline::FlatRead32((r25 + 360));
}

loc_8087A1C8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8087A1D8;
    }
}

loc_8087A1CC:
{
    r0 = MemoryInline::FlatRead8((r25 + 365));
}

loc_8087A1D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087A1F4;
    }
}

loc_8087A1D8:
{
    r4 = MemoryInline::FlatRead32((r25 + 352));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & -16);
    r0 = MemoryInline::FlatRead32((r25 + 348));
    r4 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8087A1F0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8087A2B0;
    }
}

loc_8087A1F4:
{
    r3 = MemoryInline::FlatRead32((r25 + 352));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r7 = MemoryInline::FlatRead32((r25 + 348));
    r4 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8087A20C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7))) {
        goto loc_8087A214;
    }
}

loc_8087A210:
{
    goto loc_8087A224;
}

loc_8087A214:
{
    r5 = (r5 + 1);
    r0 = (r5 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_2 = ~(r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (r5 & r0);
}

loc_8087A224:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8087A234:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r28))) {
        goto loc_8087A240;
    }
}

loc_8087A238:
{
}

loc_8087A23C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r26))) {
        goto loc_8087A2B0;
    }
}

loc_8087A240:
{
    r3 = MemoryInline::FlatRead32((r25 + 352));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    MemoryInline::FlatWrite32((r25 + 356), r6);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r25 + 364), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r25 + 365), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8087A260:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r28))) {
        goto loc_8087A268;
    }
}

loc_8087A264:
{
    MemoryInline::FlatWrite32((r25 + 380), r0);
}

loc_8087A268:
{
    r0 = MemoryInline::FlatRead32((r25 + 380));
}

loc_8087A270:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r26))) {
        goto loc_8087A28C;
    }
}

loc_8087A274:
{
    r0 = (r26 - r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    goto loc_8087A290;
}

loc_8087A28C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8896));
}

loc_8087A290:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 372));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 376), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8087A2A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087A368;
    }
}

loc_8087A2A8:
{
    MemoryInline::FlatWriteFloat32((r25 + 376), f31.d);
    goto loc_8087A368;
}

loc_8087A2B0:
{
    r0 = MemoryInline::FlatRead8((r25 + 364));
}

loc_8087A2B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087A308;
    }
}

loc_8087A2BC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r25 + 344));
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl1_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl1_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl1_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl1_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8002140C:
{
    r3 = 0;
    goto loc_inl1_cont_800213E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087A2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087A300;
    }
}

loc_8087A2D8:
{
    r0 = MemoryInline::FlatRead32((r25 + 356));
    r3 = MemoryInline::FlatRead32((r25 + 352));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r4 = MemoryInline::FlatRead32((r25 + 344));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r25 + 336));
    r0 = (r0 * 28);
    r12 = (r4 + r0);
    ctx->lr = 0x8087A2FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
}

loc_8087A300:
{
    MemoryInline::FlatWrite8((r25 + 364), static_cast<uint8_t>(r31));
    goto loc_8087A368;
}

loc_8087A308:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r25 + 344));
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl2_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl2_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl2_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl2_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8002140C:
{
    r3 = 0;
    goto loc_inl2_cont_800213E4;
}

loc_inl2_return:
{
}

loc_inl2_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087A324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087A354;
    }
}

loc_8087A328:
{
    r0 = MemoryInline::FlatRead32((r25 + 356));
    r3 = MemoryInline::FlatRead32((r25 + 352));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r4 = MemoryInline::FlatRead32((r25 + 344));
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = MemoryInline::FlatRead32((r25 + 336));
    r0 = (r0 * 28);
    r12 = (r4 + r0);
    r12 = (r12 + 12);
    ctx->lr = 0x8087A350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
}

loc_8087A354:
{
    r3 = MemoryInline::FlatRead32((r25 + 380));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_8087A35C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087A368;
    }
}

loc_8087A360:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r25 + 380), r0);
}

loc_8087A368:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 376));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r25 + 380));
    r3 = (r26 - r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8087A37C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087A1BC;
    }
}

loc_8087A380:
{
    MemoryInline::FlatWrite32((r25 + 384), r26);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFE0018FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8087A138 func_8087A138 preserves=false fpr_mask=0xC0000000
