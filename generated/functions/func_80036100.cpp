#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80036100(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80036100;

loc_80036100:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r28 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r6 = (r4 + r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80036130:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r6 + r5);
    r3 = (r0 + r3);
    r27 = (r3 + 32);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003614C;
    }
}

loc_80036144:
{
    r3 = 0;
    goto loc_800361E4;
}

loc_8003614C:
{
    r0 = MemoryInline::FlatRead16(r27);
    r29 = r27;
    r25 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r27 + r0);
    r26 = (r3 + 4);
    goto loc_800361D4;
}

loc_80036168:
{
    r24 = MemoryInline::FlatRead16(r26);
    r3 = r31;
    r4 = 0;
    r26 = (r26 + 2);
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl1_0x800AF1A0:
{
}

loc_inl1_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF1B0;
    }
}

loc_inl1_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_800AF1A0;
}

loc_inl1_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl1_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r30 = r3;
    goto loc_800361AC;
}

loc_80036184:
{
    r3 = r30;
    r4 = r26;
    ctx->lr = 0x80036190u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035AC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80036194:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8003619C;
    }
}

loc_80036198:
{
    goto loc_800361B8;
}

loc_8003619C:
{
    r3 = r31;
    r4 = r30;
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl2_0x800AF1A0:
{
}

loc_inl2_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AF1B0;
    }
}

loc_inl2_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl2_cont_800AF1A0;
}

loc_inl2_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
}

loc_inl2_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r30 = r3;
}

loc_800361AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800361B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80036184;
    }
}

loc_800361B4:
{
    r3 = 0;
}

loc_800361B8:
{
}

loc_800361BC:
{
    MemoryInline::FlatWrite32((r29 + 4), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800361C8;
    }
}

loc_800361C4:
{
    r28 = (r28 + 1);
}

loc_800361C8:
{
    r26 = (r26 + r24);
    r29 = (r29 + 4);
    r25 = (r25 + 1);
}

loc_800361D4:
{
    r0 = MemoryInline::FlatRead16(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r0));
}

loc_800361DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80036168;
    }
}

loc_800361E0:
{
    r3 = r28;
}

loc_800361E4:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0001FB gpr_write=0xFF0009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80036100 func_80036100 preserves=true fpr_mask=0x00000000
