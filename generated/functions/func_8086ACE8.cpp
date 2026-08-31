#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086ACE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086ACE8;

loc_8086ACE8:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 224);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r27 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r3 + 172));
    r23 = r3;
    r3 = (r1 + 68);
    r27 = (r27 + 8272);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807C4E4Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r4 = MemoryInline::FlatRead32((r23 + 172));
    r3 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807C4E7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f4.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f3.d = std::fabs(f3.d);
    f1.d = std::fabs(f2.d);
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8086AD5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086AD64;
    }
}

loc_8086AD60:
{
    goto loc_8086AD68;
}

loc_8086AD64:
{
    f3.d = f1.d;
}

loc_8086AD68:
{
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8086AD6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086AD74;
    }
}

loc_8086AD70:
{
    goto loc_8086AD78;
}

loc_8086AD74:
{
    f4.d = f0.d;
}

loc_8086AD78:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_8086AD7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086AD84;
    }
}

loc_8086AD80:
{
    goto loc_8086AD88;
}

loc_8086AD84:
{
    f3.d = f4.d;
}

loc_8086AD88:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 56));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r23 + 428), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 60));
    r26 = r23;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r23 + 432), f0.d);
    r24 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r27 + 64));
    r28 = 1127219200;
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r23 + 436), f2.d);
    r29 = 0;
    r25 = MemoryInline::FlatRead32((r3 + 26316));
    r30 = 0x802A0000u;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 420), f1.d);
    f29.d = MemoryInline::FlatReadFloat64((r27 + 72));
    r31 = 552075264;
    f30.d = MemoryInline::FlatReadFloat32(r27);
    f31.d = MemoryInline::FlatReadFloat32((r27 + 68));
    MemoryInline::FlatWriteFloat32((r23 + 424), f0.d);
}

loc_8086ADEC:
{
    MemoryInline::FlatWriteRam32((r1 + 180), r24);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r23 + 420));
    r4 = (r30 + 16688);
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f29.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    r6 = MemoryInline::FlatRead32((r1 + 44));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f30.d);
    MemoryInline::FlatWriteRam32((r1 + 168), r29);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f1.d = MemoryInline::FlatReadFloat32((r23 + 420));
    r8 = r25;
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    r6 = (r31 + 4095);
    r7 = (r1 + 80);
    r9 = 0;
    ctx->lr = 0x8086AE7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8086AF30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8086AE84:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1);
}

loc_8086AE8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8086AEC0;
    }
}

loc_8086AE90:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteFloat32((r26 + 440), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 180), r24);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 424));
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 1464), f0.d);
    goto loc_8086AEF0;
}

loc_8086AEC0:
{
}

loc_8086AEC4:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8086AED0;
    }
}

loc_8086AEC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 436));
    goto loc_8086AED4;
}

loc_8086AED0:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 64));
}

loc_8086AED4:
{
}

loc_8086AED8:
{
    MemoryInline::FlatWriteFloat32((r26 + 440), f0.d);
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8086AEE8;
    }
}

loc_8086AEE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 1460));
    goto loc_8086AEEC;
}

loc_8086AEE8:
{
    f0.d = MemoryInline::FlatReadFloat32(r27);
}

loc_8086AEEC:
{
    MemoryInline::FlatWriteFloat32((r26 + 1464), f0.d);
}

loc_8086AEF0:
{
    r24 = (r24 + 1);
    r26 = (r26 + 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(256));
}

loc_8086AEFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086ADEC;
    }
}

loc_8086AF00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 224);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086ACE8 func_8086ACE8 preserves=false fpr_mask=0xE0000000
