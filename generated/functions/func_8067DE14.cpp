#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067DE14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8067DF24_loc_0 = 0;
    uint32_t addr_lfsx_8067E01C_loc_0 = 0;
    uint32_t addr_lfsx_8067E020_loc_0 = 0;
    uint32_t addr_stfsx_8067DEA8_loc_0 = 0;
    uint32_t addr_stfsx_8067DEEC_loc_0 = 0;
    uint32_t addr_stfsx_8067DF18_loc_0 = 0;
    uint32_t addr_stfsx_8067DF40_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_rot_0 = 0;
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
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067DE14;

loc_8067DE14:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r5 = 0x808A0000u;
    r23 = r3;
    r5 = (r5 + -18568);
    r24 = r4;
    f31.d = MemoryInline::FlatReadFloat32((r5 + 60));
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r26 = (r26_rot_0 & -4);
    f30.d = MemoryInline::FlatReadFloat32((r5 + 56));
    r25 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r5 + 52));
    r27 = 0;
    r28 = 0x809C0000u;
    r30 = 0x809C0000u;
    r20 = 0x808C0000u;
    r22 = 1;
    r21 = 2;
    r31 = 3;
    r29 = 0;
    goto loc_8067DF58;
}

loc_8067DE88:
{
    r3 = MemoryInline::FlatRead32((r28 + 6584));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r26_addr_2 = (r26 + r0);
    r3 = MemoryInline::FlatRead32(r26_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 156));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r0));
}

loc_8067DEA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067DEC8;
    }
}

loc_8067DEA4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r23 + 8));
    addr_stfsx_8067DEA8_loc_0 = (r3 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8067DEA8_loc_0, f29.d);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r23 + 12));
    r3_addr_2 = (r3 + r27);
    MemoryInline::FlatWrite32(r3_addr_2, r29);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r23);
    r3_addr_3 = (r3 + r25);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r29));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r23 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r25));
    goto loc_8067DF50;
}

loc_8067DEC8:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = r25;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059152C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    // end of inlined leaf 0x8059152C
    r3 = (r24 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067DEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067DEFC;
    }
}

loc_8067DEE8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r23 + 8));
    addr_stfsx_8067DEEC_loc_0 = (r3 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8067DEEC_loc_0, f30.d);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r23 + 12));
    r3_addr_5 = (r3 + r27);
    MemoryInline::FlatWrite32(r3_addr_5, r31);
    goto loc_8067DF50;
}

loc_8067DEFC:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = r25;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059152C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    // end of inlined leaf 0x8059152C
    r4 = (r26 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r23 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    addr_stfsx_8067DF18_loc_0 = (r3 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8067DF18_loc_0, f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r23 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r20 + 3892));
    addr_lfsx_8067DF24_loc_0 = (r3 + r27);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8067DF24_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8067DF2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067DF48;
    }
}

loc_8067DF34:
{
    r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r23 + 12));
    r3_addr_7 = (r3 + r27);
    MemoryInline::FlatWrite32(r3_addr_7, r21);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r23 + 8));
    addr_stfsx_8067DF40_loc_0 = (r3 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8067DF40_loc_0, f31.d);
    goto loc_8067DF50;
}

loc_8067DF48:
{
    r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r23 + 12));
    r3_addr_8 = (r3 + r27);
    MemoryInline::FlatWrite32(r3_addr_8, r22);
}

loc_8067DF50:
{
    r27 = (r27 + 4);
    r25 = (r25 + 1);
}

loc_8067DF58:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r23, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r23 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r0));
}

loc_8067DF60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067DE88;
    }
}

loc_8067DF64:
{
    r3 = r23;
    r4 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067E0BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r25 = 0;
    r28 = 0;
    r31 = 0x809C0000u;
    goto loc_8067E080;
}

loc_8067DF80:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r23 + 12));
    r3_addr_11 = (r3 + r28);
    r0 = MemoryInline::FlatRead32(r3_addr_11);
}

loc_8067DF8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8067E078;
    }
}

loc_8067DF90:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r23);
    r3_addr_12 = (r3 + r25);
    r3 = MemoryInline::FlatRead8(r3_addr_12);
    r0 = (r3 + -1);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8067DFA4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(-1))) {
        goto loc_8067DFD4;
    }
}

loc_8067DFA8:
{
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r24 & 255);
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, r23);
    r4_addr_2 = (r4 + r25);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r23);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r23 + 4));
        }
    }
    r3_addr_13 = (r3 + r25);
    r3 = MemoryInline::FlatRead8(r3_addr_13);
    r3 = (r3 + -1);
    r24_addr_2 = (r24 + r0);
    MemoryInline::FlatWrite8(r24_addr_2, static_cast<uint8_t>(r25));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8067DFD4:
{
}

loc_8067DFD8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8067E078;
    }
}

loc_8067DFDC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r23 + 4));
    r5 = 1;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r23 + 12));
    r4_addr_4 = (r4 + r6);
    r7 = MemoryInline::FlatRead8(r4_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r3_addr_15 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_15);
}

loc_8067DFFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8067E00C;
    }
}

loc_8067E000:
{
}

loc_8067E004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8067E00C;
    }
}

loc_8067E008:
{
    r5 = 0;
}

loc_8067E00C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8067E010:
{
    r0 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067E030;
    }
}

loc_8067E018:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r23 + 8));
    addr_lfsx_8067E01C_loc_0 = (r3 + r28);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8067E01C_loc_0);
    addr_lfsx_8067E020_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8067E020_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8067E028:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067E030;
    }
}

loc_8067E02C:
{
    r0 = 1;
}

loc_8067E030:
{
}

loc_8067E034:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8067E040;
    }
}

loc_8067E038:
{
}

loc_8067E03C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8067E078;
    }
}

loc_8067E040:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r23);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5_addr_2 = (r5 + r25);
    r3 = MemoryInline::FlatRead8(r5_addr_2);
    r0 = (r3 + -1);
    r5_addr_3 = (r5 + r25);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r23);
    r5_addr_4 = (r5 + r4);
    r3 = MemoryInline::FlatRead8(r5_addr_4);
    r0 = (r3 + 1);
    r5_addr_5 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_5, static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r23 + 4));
    r3_addr_16 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_16, static_cast<uint8_t>(r25));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r23 + 4));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r7));
}

loc_8067E078:
{
    r28 = (r28 + 4);
    r25 = (r25 + 1);
}

loc_8067E080:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r23, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r23 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r0));
}

loc_8067E088:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067DF80;
    }
}

loc_8067E08C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF01FFB gpr_write=0xFFF01FFB gpr_return=0x00000018 fpr_read=0xE0000003 fpr_write=0xE0000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067DE14 func_8067DE14 preserves=false fpr_mask=0xE0000000
