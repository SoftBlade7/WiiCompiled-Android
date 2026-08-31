#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80688DAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_22 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80688DAC;

loc_80688DAC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 192);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r7 = 0x808A0000u;
    r6 = 0x808A0000u;
    r7 = (r7 + -11336);
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32(r7);
    r23 = r3;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r1 + 120), f0.d);
    r24 = r4;
    f29.d = MemoryInline::FlatReadFloat32((r7 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r1 + 124), f0.d);
    r25 = r5;
    f30.d = MemoryInline::FlatReadFloat32((r7 + 36));
    r29 = (r1 + 44);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r1 + 128), f0.d);
    r30 = (r1 + 32);
    f28.d = MemoryInline::FlatReadFloat32((r6 + -11252));
    r27 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r1 + 132), f0.d);
    r26 = 0;
    r22 = 0;
    r28 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r1 + 136), f0.d);
    r31 = 0x808C0000u;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r1 + 140), f0.d);
}

loc_80688E48:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(9));
}

loc_80688E4C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8068917C;
    }
}

loc_80688E50:
{
    r3 = (r31 + 5896);
    r3_addr_2 = (r3 + r22);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80688E60u:
        goto loc_80688E60;
        break;
    case 0x80688EB0u:
        goto loc_80688EB0;
        break;
    case 0x80688F00u:
        goto loc_80688F00;
        break;
    case 0x80688F50u:
        goto loc_80688F50;
        break;
    case 0x80688FA0u:
        goto loc_80688FA0;
        break;
    case 0x80688FF0u:
        goto loc_80688FF0;
        break;
    case 0x80689040u:
        goto loc_80689040;
        break;
    case 0x80689090u:
        goto loc_80689090;
        break;
    case 0x806890E0u:
        goto loc_806890E0;
        break;
    case 0x80689130u:
        goto loc_80689130;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80688E60:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r3);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 60u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 64u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80688EB0:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, r3);
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 60u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 64u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80688F00:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_7 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 0u, (r3 + 12));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_8, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 4u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 8u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 48u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 52u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 56u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 60u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 64u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 68u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_8, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80688F50:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_9 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 0u, (r3 + 12));
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_10, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 4u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 8u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 60u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 64u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 68u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 12u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 16u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 20u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_10, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80688FA0:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_11 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 0u, (r3 + 24));
    guest_range_12 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_12, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 4u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 8u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 48u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 52u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 56u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 60u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 64u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 68u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80688FF0:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_13 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 0u, (r3 + 24));
    guest_range_14 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_14, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 4u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 8u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 60u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 64u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 68u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 12u, (r3 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 16u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_13, 20u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_14, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80689040:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_15 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 0u, (r3 + 36));
    guest_range_16 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_16, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 4u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 8u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 48u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 52u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 56u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 12u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 16u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_15, 20u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_16, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80689090:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_17 = MemoryInline::ResolveRangeHost(r3, 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 36u, (r3 + 36));
    guest_range_18 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_18, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 40u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 44u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 48u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 52u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 56u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 0u, r3);
    MemoryInline::WriteResolvedFloat32(guest_range_18, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_17, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_18, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_806890E0:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_19 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 0u, (r3 + 48));
    guest_range_20 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_20, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 4u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 8u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 36u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 40u, (r3 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 44u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 24u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 28u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_19, 32u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_20, 8u, (r1 + 88), f0.d);
    goto loc_8068917C;
}

loc_80689130:
{
    r3 = MemoryInline::FlatRead32((r23 + 176));
    guest_range_21 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 0u, (r3 + 48));
    guest_range_22 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_22, 24u, (r1 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 4u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 28u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 8u, (r3 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 32u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 24u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 12u, (r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 28u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 16u, (r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 32u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 20u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 12u, (r3 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 0u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 16u, (r3 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 4u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_21, 20u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_22, 8u, (r1 + 88), f0.d);
}

loc_8068917C:
{
    r7 = r24;
    r3 = (r1 + 68);
    r4 = (r1 + 104);
    r5 = (r1 + 92);
    r6 = (r1 + 80);
    ctx->lr = 0x80689194u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80862E24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r24;
    r4 = (r1 + 68);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f27.d = f1.d;
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f28.d);
}

loc_806891A8:
{
    if (((cr & 0x80000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_80689278;
    }
}

loc_806891AC:
{
    r5 = r24;
    r3 = (r1 + 56);
    r4 = (r1 + 68);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 56);
    r4 = (r1 + 44);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_3, f3.d);
    // end of inlined leaf 0x8019AC24
    r0 = MemoryInline::FlatRead32((r23 + 184));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_2));
    r4 = (r0 + r28);
    r28_addr_2 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_2));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f0.d, f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f29.d);
}

loc_80689208:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8068921C;
    }
}

loc_8068920C:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f30.d);
}

loc_80689210:
{
    if (((cr & 0x80000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80689278;
    }
}

loc_80689214:
{
    SetCRFloatResident(cr, 0, f31.d, PPC_PsToScalarInline(f27.d));
}

loc_80689218:
{
    if (((cr & 0x40000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80689278;
    }
}

loc_8068921C:
{
    f1.d = f31.d;
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    r5 = (r1 + 20);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r1 + 120);
    MemoryInline::FlatWriteFloat32(r25, f0.d);
    r4 = r3;
    r5 = r25;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r25 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r25 + 8), f0.d);
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r1 + 132);
    r5 = r25;
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    r27 = (r27 + 1);
}

loc_80689278:
{
    r26 = (r26 + 1);
    r22 = (r22 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(10));
}

loc_80689284:
{
    r28 = (r28 + 12);
    if (((cr & 0x80000000u) != 0)) {
        f27.d = PPC_PsToScalarInline(f27.d);
        goto loc_80688E48;
    }
}

loc_8068928C:
{
    r4 = (r1 + 132);
    r5 = (r1 + 120);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    r0 = (0 - r27);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    r0 = (r0 & ~r27);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r25, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_0 = (r25 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_0, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r11 = (r1 + 192);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80688DAC func_80688DAC preserves=false fpr_mask=0xF8000000
