#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80712B58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_10 = 0;
    uint32_t r25_addr_11 = 0;
    uint32_t r25_addr_12 = 0;
    uint32_t r25_addr_13 = 0;
    uint32_t r25_addr_14 = 0;
    uint32_t r25_addr_15 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r25_addr_7 = 0;
    uint32_t r25_addr_8 = 0;
    uint32_t r25_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80712B58;

loc_80712B58:
{
    MemoryInline::FlatWriteRam32((r1 + -3216), r1);
    r1 = (r1 + -3216);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 3220), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 3200), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + -888);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 3200);
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
    r0 = MemoryInline::FlatRead8((r3 + 112));
    r31 = 0x808A0000u;
    r24 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712B84:
{
    r31 = (r31 + 7824);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80713734;
    }
}

loc_80712B8C:
{
    r5 = (r1 + 192);
    r0 = (r1 + 280);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 124), 0, 4u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80712B9C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712C70;
    }
}

loc_80712BAC:
{
    r4 = (r1 + 216);
    r0 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712BC0;
    }
}

loc_80712BBC:
{
    r3 = 1;
}

loc_80712BC0:
{
}

loc_80712BC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80712BCC;
    }
}

loc_80712BC8:
{
    r0 = 1;
}

loc_80712BCC:
{
}

loc_80712BD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80712C3C;
    }
}

loc_80712BD4:
{
    r0 = (r4 + 63);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r0 - r5);
    r3 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 67108863);
    ctr = r0;
}

loc_80712BF0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80712C3C;
    }
}

loc_80712BF4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r5, r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r5 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r5 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r5 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r5 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r5 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r5 + 60), f0.d);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712BF4;
    }
}

loc_80712C3C:
{
    r3 = (r1 + 280);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r3 + 7);
    r4 = 0;
    r0 = (r0 - r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    ctr = r0;
}

loc_80712C5C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_80712C70;
    }
}

loc_80712C60:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712C60;
    }
}

loc_80712C70:
{
    r5 = (r1 + 768);
    r0 = (r1 + 3160);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80712C80:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 760), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 764), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712D54;
    }
}

loc_80712C90:
{
    r4 = (r1 + 3096);
    r0 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712CA4;
    }
}

loc_80712CA0:
{
    r3 = 1;
}

loc_80712CA4:
{
}

loc_80712CA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80712CB0;
    }
}

loc_80712CAC:
{
    r0 = 1;
}

loc_80712CB0:
{
}

loc_80712CB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80712D20;
    }
}

loc_80712CB8:
{
    r0 = (r4 + 63);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r0 - r5);
    r3 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_5 & 67108863);
    ctr = r0;
}

loc_80712CD4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80712D20;
    }
}

loc_80712CD8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r5, r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r5 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r5 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r5 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r5 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r5 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r5 + 60), f0.d);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712CD8;
    }
}

loc_80712D20:
{
    r3 = (r1 + 3160);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r3 + 7);
    r4 = 0;
    r0 = (r0 - r5);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_80712D40:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_80712D54;
    }
}

loc_80712D44:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712D44;
    }
}

loc_80712D54:
{
    r5 = (r1 + 96);
    r0 = (r1 + 184);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80712D64:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712E38;
    }
}

loc_80712D74:
{
    r4 = (r1 + 120);
    r0 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712D88;
    }
}

loc_80712D84:
{
    r3 = 1;
}

loc_80712D88:
{
}

loc_80712D8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80712D94;
    }
}

loc_80712D90:
{
    r0 = 1;
}

loc_80712D94:
{
}

loc_80712D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80712E04;
    }
}

loc_80712D9C:
{
    r0 = (r4 + 63);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r0 - r5);
    r3 = 0;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_9 & 67108863);
    ctr = r0;
}

loc_80712DB8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80712E04;
    }
}

loc_80712DBC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, r5, r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r5 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r5 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r5 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r5 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r5 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 60u, (r5 + 60), f0.d);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712DBC;
    }
}

loc_80712E04:
{
    r3 = (r1 + 184);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r3 + 7);
    r4 = 0;
    r0 = (r0 - r5);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
    ctr = r0;
}

loc_80712E24:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_80712E38;
    }
}

loc_80712E28:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712E28;
    }
}

loc_80712E38:
{
    r5 = (r1 + 16);
    r0 = (r1 + 88);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80712E48:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712F1C;
    }
}

loc_80712E58:
{
    r4 = (r1 + 24);
    r0 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712E6C;
    }
}

loc_80712E68:
{
    r3 = 1;
}

loc_80712E6C:
{
}

loc_80712E70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80712E78;
    }
}

loc_80712E74:
{
    r0 = 1;
}

loc_80712E78:
{
}

loc_80712E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80712EE8;
    }
}

loc_80712E80:
{
    r0 = (r4 + 63);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r0 - r5);
    r3 = 0;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_13 & 67108863);
    ctr = r0;
}

loc_80712E9C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80712EE8;
    }
}

loc_80712EA0:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, r5, r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r5 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r5 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r5 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r5 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 52u, (r5 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 60u, (r5 + 60), f0.d);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712EA0;
    }
}

loc_80712EE8:
{
    r3 = (r1 + 88);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r3 + 7);
    r4 = 0;
    r0 = (r0 - r5);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_15 & 536870911);
    ctr = r0;
}

loc_80712F08:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_80712F1C;
    }
}

loc_80712F0C:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712F0C;
    }
}

loc_80712F1C:
{
    r5 = (r1 + 288);
    r0 = (r1 + 760);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80712F2C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 280), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 284), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713000;
    }
}

loc_80712F3C:
{
    r4 = (r1 + 696);
    r0 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712F50;
    }
}

loc_80712F4C:
{
    r3 = 1;
}

loc_80712F50:
{
}

loc_80712F54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80712F5C;
    }
}

loc_80712F58:
{
    r0 = 1;
}

loc_80712F5C:
{
}

loc_80712F60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80712FCC;
    }
}

loc_80712F64:
{
    r0 = (r4 + 63);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r0 - r5);
    r3 = 0;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_17 & 67108863);
    ctr = r0;
}

loc_80712F80:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80712FCC;
    }
}

loc_80712F84:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, r5, r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r5 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 12u, (r5 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r5 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r5 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 44u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 52u, (r5 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_6, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 60u, (r5 + 60), f0.d);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712F84;
    }
}

loc_80712FCC:
{
    r3 = (r1 + 760);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 124));
    r0 = (r3 + 7);
    r4 = 0;
    r0 = (r0 - r5);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_19 & 536870911);
    ctr = r0;
}

loc_80712FEC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_80713000;
    }
}

loc_80712FF0:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80712FF0;
    }
}

loc_80713000:
{
    r30 = 0;
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r25 = 0;
    goto loc_80713504;
}

loc_8071301C:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80713030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r25 + 12));
    r23 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 124));
}

loc_80713040:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2))) {
        goto loc_8071317C;
    }
}

loc_80713044:
{
    r0 = (r4 + -5);
}

loc_8071304C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8071306C;
    }
}

loc_80713050:
{
}

loc_80713054:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_807130F4;
    }
}

loc_80713058:
{
}

loc_8071305C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_807133DC;
    }
}

loc_80713060:
{
}

loc_80713064:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80713464;
    }
}

loc_80713068:
{
    goto loc_80713504;
}

loc_8071306C:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
}

loc_80713074:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_80713078:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r4 = r24;
    ctr = r0;
}

loc_80713088:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807130D8;
    }
}

loc_8071308C:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 328));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807130C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807130D0;
    }
}

loc_807130CC:
{
    f31.d = f0.d;
}

loc_807130D0:
{
    r4 = (r4 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071308C;
    }
}

loc_807130D8:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_25 & 524280);
    r3 = (r1 + 184);
    r3 = (r3 + r0);
    r30 = (r30 + 1);
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    MemoryInline::FlatWrite32(r3, r25);
    goto loc_80713504;
}

loc_807130F4:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
}

loc_807130FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_80713100:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r4 = r24;
    ctr = r0;
}

loc_80713110:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80713160;
    }
}

loc_80713114:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 328));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80713150:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80713158;
    }
}

loc_80713154:
{
    f31.d = f0.d;
}

loc_80713158:
{
    r4 = (r4 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80713114;
    }
}

loc_80713160:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_24 & 524280);
    r3 = (r1 + 88);
    r3 = (r3 + r0);
    r28 = (r28 + 1);
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    MemoryInline::FlatWrite32(r3, r25);
    goto loc_80713504;
}

loc_8071317C:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
}

loc_80713184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_80713188:
{
    r0 = MemoryInline::FlatRead16((r25 + 8));
    r22 = 0;
}

loc_80713194:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(375))) {
        goto loc_8071325C;
    }
}

loc_80713198:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(211));
}

loc_8071319C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807131A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807131FC;
    }
}

loc_807131A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(117));
}

loc_807131A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713358;
    }
}

loc_807131AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807131D8;
    }
}

loc_807131B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(112));
}

loc_807131B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807131B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807131C8;
    }
}

loc_807131BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(101));
}

loc_807131C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807131C4:
{
    goto loc_80713358;
}

loc_807131C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(115));
}

loc_807131CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713324;
    }
}

loc_807131D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713310;
    }
}

loc_807131D4:
{
    goto loc_80713358;
}

loc_807131D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(201));
}

loc_807131DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807131E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807131F0;
    }
}

loc_807131E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(119));
}

loc_807131E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713358;
    }
}

loc_807131EC:
{
    goto loc_80713310;
}

loc_807131F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(206));
}

loc_807131F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807131F8:
{
    goto loc_80713358;
}

loc_807131FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(242));
}

loc_80713200:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713204:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713234;
    }
}

loc_80713208:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(235));
}

loc_8071320C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713210:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713220;
    }
}

loc_80713214:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(213));
}

loc_80713218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_8071321C:
{
    goto loc_80713358;
}

loc_80713220:
{
}

loc_80713224:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(241))) {
        goto loc_80713358;
    }
}

loc_80713228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(239));
}

loc_8071322C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713310;
    }
}

loc_80713230:
{
    goto loc_80713358;
}

loc_80713234:
{
}

loc_80713238:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(367))) {
        goto loc_80713248;
    }
}

loc_8071323C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(362));
}

loc_80713240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713244:
{
    goto loc_80713358;
}

loc_80713248:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(373));
}

loc_8071324C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713310;
    }
}

loc_80713250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(370));
}

loc_80713254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713358;
    }
}

loc_80713258:
{
    goto loc_80713310;
}

loc_8071325C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(523));
}

loc_80713260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713358;
    }
}

loc_80713264:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807132BC;
    }
}

loc_80713268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(427));
}

loc_8071326C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713270:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713298;
    }
}

loc_80713274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(413));
}

loc_80713278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_8071327C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071328C;
    }
}

loc_80713280:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(396));
}

loc_80713284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713288:
{
    goto loc_80713358;
}

loc_8071328C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(419));
}

loc_80713290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713294:
{
    goto loc_80713358;
}

loc_80713298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(517));
}

loc_8071329C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807132A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807132B0;
    }
}

loc_807132A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(511));
}

loc_807132A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807132AC:
{
    goto loc_80713358;
}

loc_807132B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(522));
}

loc_807132B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713310;
    }
}

loc_807132B8:
{
    goto loc_80713358;
}

loc_807132BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(731));
}

loc_807132C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807132C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807132EC;
    }
}

loc_807132C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(529));
}

loc_807132CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807132D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807132E0;
    }
}

loc_807132D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(526));
}

loc_807132D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713358;
    }
}

loc_807132DC:
{
    goto loc_80713310;
}

loc_807132E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(728));
}

loc_807132E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807132E8:
{
    goto loc_80713358;
}

loc_807132EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10112));
}

loc_807132F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_807132F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713304;
    }
}

loc_807132F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5240));
}

loc_807132FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_80713300:
{
    goto loc_80713358;
}

loc_80713304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10211));
}

loc_80713308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713310;
    }
}

loc_8071330C:
{
    goto loc_80713358;
}

loc_80713310:
{
    r3 = r25;
    r22 = 1;
    r4 = 0;
    ctx->lr = 0x80713320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80713358;
}

loc_80713324:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80713328:
{
    r3 = r25;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713334;
    }
}

loc_80713330:
{
    r3 = (r25 + -148);
}

loc_80713334:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8070E72Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071333C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713354;
    }
}

loc_80713340:
{
    r3 = r25;
    r22 = 1;
    r4 = 1;
    ctx->lr = 0x80713350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80713358;
}

loc_80713354:
{
    r22 = 0;
}

loc_80713358:
{
}

loc_8071335C:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_80713360:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r3 = r24;
    ctr = r0;
}

loc_80713370:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807133C0;
    }
}

loc_80713374:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f2.d = MemoryInline::FlatReadFloat32(r23);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 328));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f3.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807133B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807133B8;
    }
}

loc_807133B4:
{
    f31.d = f0.d;
}

loc_807133B8:
{
    r3 = (r3 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80713374;
    }
}

loc_807133C0:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_26 & 524280);
    r3 = (r1 + 760);
    r3 = (r3 + r0);
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    MemoryInline::FlatWrite32(r3, r25);
    goto loc_80713504;
}

loc_807133DC:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
}

loc_807133E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_807133E8:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r4 = r24;
    ctr = r0;
}

loc_807133F8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80713448;
    }
}

loc_807133FC:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 328));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80713438:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80713440;
    }
}

loc_8071343C:
{
    f31.d = f0.d;
}

loc_80713440:
{
    r4 = (r4 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807133FC;
    }
}

loc_80713448:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & 524280);
    r3 = (r1 + 8);
    r3 = (r3 + r0);
    r27 = (r27 + 1);
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    MemoryInline::FlatWrite32(r3, r25);
    goto loc_80713504;
}

loc_80713464:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
}

loc_8071346C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_80713470:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80713474:
{
    r3 = r25;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713480;
    }
}

loc_8071347C:
{
    r3 = (r25 + -140);
}

loc_80713480:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80704B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80713488:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80713504;
    }
}

loc_8071348C:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r3 = r24;
    ctr = r0;
}

loc_8071349C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807134EC;
    }
}

loc_807134A0:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f2.d = MemoryInline::FlatReadFloat32(r23);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 328));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f3.d = std::fabs(f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = std::fabs(f1.d);
    f1.d = std::fabs(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807134DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807134E4;
    }
}

loc_807134E0:
{
    f31.d = f0.d;
}

loc_807134E4:
{
    r3 = (r3 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807134A0;
    }
}

loc_807134EC:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & 524280);
    r3 = (r1 + 280);
    r3 = (r3 + r0);
    r26 = (r26 + 1);
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    MemoryInline::FlatWrite32(r3, r25);
}

loc_80713504:
{
    r4 = r25;
    r3 = (r24 + 120);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80713514:
{
    r25 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071301C;
    }
}

loc_8071351C:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80713524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713544;
    }
}

loc_80713528:
{
    r6 = 0x80710000u;
    r3 = (r1 + 760);
    r4 = (r29 & 65535);
    r5 = 8;
    r6 = (r6 + 1636);
    ctx->lr = 0x80713540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80713598;
}

loc_80713544:
{
    r25 = 0x80710000u;
    r3 = (r1 + 184);
    r4 = (r30 & 65535);
    r5 = 8;
    r6 = (r25 + 1636);
    ctx->lr = 0x8071355Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 88);
    r4 = (r28 & 65535);
    r6 = (r25 + 1636);
    r5 = 8;
    ctx->lr = 0x80713570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    r4 = (r27 & 65535);
    r6 = (r25 + 1636);
    r5 = 8;
    ctx->lr = 0x80713584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 280);
    r4 = (r26 & 65535);
    r6 = (r25 + 1636);
    r5 = 8;
    ctx->lr = 0x80713598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80713598:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
}

loc_807135A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807135F4;
    }
}

loc_807135A4:
{
    r23 = (r1 + 760);
    r25 = (r31 + 84);
    r22 = 0;
}

loc_807135B0:
{
    r3 = MemoryInline::FlatRead32(r23);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807135B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713724;
    }
}

loc_807135BC:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r25_addr_2 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_807135C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807135D8;
    }
}

loc_807135CC:
{
    r4 = 0;
    ctx->lr = 0x807135D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807135E0;
}

loc_807135D8:
{
    r4 = 1;
    ctx->lr = 0x807135E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807135E0:
{
    r22 = (r22 + 1);
    r23 = (r23 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(300));
}

loc_807135EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807135B0;
    }
}

loc_807135F0:
{
    goto loc_80713724;
}

loc_807135F4:
{
    r23 = (r1 + 184);
    r25 = (r31 + 68);
    r22 = 0;
}

loc_80713600:
{
    r3 = MemoryInline::FlatRead32(r23);
}

loc_80713608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80713640;
    }
}

loc_8071360C:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r25_addr_4 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_80713618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713628;
    }
}

loc_8071361C:
{
    r4 = 0;
    ctx->lr = 0x80713624u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80713630;
}

loc_80713628:
{
    r4 = 1;
    ctx->lr = 0x80713630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80713630:
{
    r22 = (r22 + 1);
    r23 = (r23 + 8);
}

loc_8071363C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(12))) {
        goto loc_80713600;
    }
}

loc_80713640:
{
    r23 = (r1 + 88);
    r25 = (r31 + 76);
    r22 = 0;
}

loc_8071364C:
{
    r3 = MemoryInline::FlatRead32(r23);
}

loc_80713654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8071368C;
    }
}

loc_80713658:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r25_addr_7 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_80713664:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80713674;
    }
}

loc_80713668:
{
    r4 = 0;
    ctx->lr = 0x80713670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8071367C;
}

loc_80713674:
{
    r4 = 1;
    ctx->lr = 0x8071367Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8071367C:
{
    r22 = (r22 + 1);
    r23 = (r23 + 8);
}

loc_80713688:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(12))) {
        goto loc_8071364C;
    }
}

loc_8071368C:
{
    r23 = (r1 + 8);
    r25 = (r31 + 92);
    r22 = 0;
}

loc_80713698:
{
    r3 = MemoryInline::FlatRead32(r23);
}

loc_807136A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807136D8;
    }
}

loc_807136A4:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r25_addr_10 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_807136B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807136C0;
    }
}

loc_807136B4:
{
    r4 = 0;
    ctx->lr = 0x807136BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807136C8;
}

loc_807136C0:
{
    r4 = 1;
    ctx->lr = 0x807136C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807136C8:
{
    r22 = (r22 + 1);
    r23 = (r23 + 8);
}

loc_807136D4:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(10))) {
        goto loc_80713698;
    }
}

loc_807136D8:
{
    r23 = (r1 + 280);
    r25 = (r31 + 100);
    r22 = 0;
}

loc_807136E4:
{
    r3 = MemoryInline::FlatRead32(r23);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807136EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713724;
    }
}

loc_807136F0:
{
    r0 = MemoryInline::FlatRead8((r24 + 76));
    r25_addr_13 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_13);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_807136FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071370C;
    }
}

loc_80713700:
{
    r4 = 0;
    ctx->lr = 0x80713708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80713714;
}

loc_8071370C:
{
    r4 = 1;
    ctx->lr = 0x80713714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80713714:
{
    r22 = (r22 + 1);
    r23 = (r23 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(60));
}

loc_80713720:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807136E4;
    }
}

loc_80713724:
{
    r0 = MemoryInline::FlatRead8((r24 + 372));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_27 & 134217727);
    MemoryInline::FlatWrite8((r24 + 372), static_cast<uint8_t>(r0));
}

loc_80713734:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r1_psq_tmp_1 = (r1 + -888);
    PpcSetPairedFprInline(f31, PPC_PsqLStackInline<0u, 0u>(ctx, r1_psq_tmp_1));
    r11 = (r1 + 3200);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 3200));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_7 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 3220));
    ctx->lr = r0;
    r1 = (r1 + 3216);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80712B58 func_80712B58 preserves=false fpr_mask=0x80000000
