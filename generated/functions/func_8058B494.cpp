#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058B494(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8058B494;

loc_8058B494:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 308u, (r1 + 308), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 240);
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
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 128u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r3 + 116));
    r31 = 0x80890000u;
    r0 = MemoryInline::ReadResolved32(guest_range_3, 120u, (r3 + 120));
    r23 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r1 + 80), r0);
    r30 = r3;
    r31 = (r31 + 6920);
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 124u, (r3 + 124));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 104u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_3, 104u, (r3 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 108u, (r3 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 112u, (r3 + 112));
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 56), r0);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 80));
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r4);
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r3 = r30;
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 60), r0);
    // inline leaf 0x80590888 (5 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590888
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(20));
}

loc_8058B538:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r24 = 20;
    f6.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f3.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8058B584;
    }
}

loc_8058B580:
{
    r24 = r23;
}

loc_8058B584:
{
}

loc_8058B588:
{
    f29.d = MemoryInline::FlatReadFloat32((r31 + 4));
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(3))) {
        goto loc_8058B5B8;
    }
}

loc_8058B590:
{
    r3 = (20 - r24);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(20) >= static_cast<uint32_t>(r24) ? 1u : 0u) << 29);
    r0 = 1127219200;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r3);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 72));
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_8058B5B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_8058B5BC:
{
    r23 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8058B758;
    }
}

loc_8058B5C4:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    r25 = 0;
    f28.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r26 = 0x809C0000u;
    r27 = 0x809C0000u;
    r28 = -352780288;
    r29 = 552075264;
    goto loc_8058B750;
}

loc_8058B5E4:
{
    r3 = r30;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f4.d = PpcFmulsInline(f29.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = f30.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r4 = (r1 + 64);
    f6.d = PpcFmulsInline(f4.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f5.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    r3 = MemoryInline::FlatRead32((r26 + 12100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f4.d);
    r5 = (r27 + 15364);
    r6 = (r28 + -16897);
    r7 = (r1 + 88);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    r8 = (r1 + 8);
    r9 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f31.d);
    MemoryInline::FlatWriteRam32((r1 + 176), r25);
    MemoryInline::FlatWriteRam32((r1 + 8), r25);
    ctx->lr = 0x8058B67Cu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8078F784u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8058B680:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058B74C;
    }
}

loc_8058B684:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r4 = (r29 + 4095);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058B6D0;
    }
}

loc_8058B6C4:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8058B6D4;
}

loc_8058B6D0:
{
    r3 = 0;
}

loc_8058B6D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8058B6D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058B74C;
    }
}

loc_8058B6DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    r3 = (r1 + 52);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = PpcFmulsInline(f3.d, f28.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PpcFmulsInline(f2.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f0.d = PpcFmulsInline(f3.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    ctx->lr = 0x8058B738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 76);
    r5 = (r1 + 52);
    r4 = r3;
    r6 = 1;
    ctx->lr = 0x8058B74Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8058B74C:
{
    r23 = (r23 + 1);
}

loc_8058B750:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(r24));
}

loc_8058B754:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8058B5E4;
    }
}

loc_8058B758:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r3 = (r3 + 240);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023A210u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 288u, true, false);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r1 + 36));
    r3 = (r30 + 44);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r1 + 24));
    f13.d = MemoryInline::FlatReadFloat32((r30 + 140));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r1 + 28));
    f5.d = PpcFmulsInline(f29.d, f0.d);
    f11.d = MemoryInline::FlatReadFloat32((r30 + 144));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r1 + 32));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 148));
    f6.d = PpcFmulsInline(f29.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f29.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f29.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = r30;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32((r30 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 264u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 248u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 232u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 216u, (r1 + 240));
    r11 = (r1 + 240);
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
    r0 = MemoryInline::ReadResolved32(guest_range_4, 284u, (r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058B494 func_8058B494 preserves=false fpr_mask=0xF0000000
