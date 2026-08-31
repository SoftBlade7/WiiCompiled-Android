#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80052090;

loc_80052090:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
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
    r6 = MemoryInline::FlatRead32(r3);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r31 = MemoryInline::FlatRead32((r6 + 44));
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800520C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052174;
    }
}

loc_800520C4:
{
    r30 = 0;
    r25 = 1;
    r24 = 0;
    goto loc_8005216C;
}

loc_800520D4:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_800520E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800520EC;
    }
}

loc_800520E4:
{
    r0 = (r3 + r0);
    goto loc_800520F0;
}

loc_800520EC:
{
    r0 = 0;
}

loc_800520F0:
{
    r22 = (r0 + r30);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
    r23 = (r3 + 64);
}

loc_80052100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052110;
    }
}

loc_80052104:
{
    r3 = (r22 + r0);
    r3 = (r3 + -4);
    goto loc_80052114;
}

loc_80052110:
{
    r3 = 0;
}

loc_80052114:
{
}

loc_80052118:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80052164;
    }
}

loc_8005211C:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_80052124:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052164;
    }
}

loc_80052128:
{
    r4 = r27;
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80052138:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80052164;
    }
}

loc_8005213C:
{
    MemoryInline::FlatWrite32((r22 + 8), r24);
}

loc_80052144:
{
    r0 = MemoryInline::FlatRead32((r22 + 16));
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80052164;
    }
}

loc_8005214C:
{
}

loc_80052150:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_80052164;
    }
}

loc_80052154:
{
    r3 = MemoryInline::FlatRead32(r23);
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite32(r23, r0);
}

loc_80052164:
{
    r30 = (r30 + 52);
    r29 = (r29 + 1);
}

loc_8005216C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
}

loc_80052170:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800520D4;
    }
}

loc_80052174:
{
    r11 = (r1 + 48);
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
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC001FB gpr_write=0xFFC009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80052090 func_80052090 preserves=true fpr_mask=0x00000000
