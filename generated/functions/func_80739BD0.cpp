#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80739BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80739BD0;

loc_80739BD0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r25 = r3;
    r26 = r4;
    r29 = 0;
    r28 = 0;
    r31 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r30 = (r0 & 255);
    goto loc_80739C4C;
}

loc_80739C00:
{
    r0 = (r28 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r0 = (r0 * 240);
    r4 = MemoryInline::FlatRead32((r31 + -10456));
    r3 = (r25 + r3);
}

loc_80739C18:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r4 = (r4 + r0);
    r27 = MemoryInline::FlatRead16((r4 + 256));
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80739C30;
    }
}

loc_80739C28:
{
    ctx->lr = 0x80739C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8072624Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    goto loc_80739C34;
}

loc_80739C30:
{
    ctx->lr = 0x80739C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80726290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
}

loc_80739C34:
{
}

loc_80739C38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80739C48;
    }
}

loc_80739C3C:
{
}

loc_80739C40:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r29))) {
        goto loc_80739C48;
    }
}

loc_80739C44:
{
    r29 = r27;
}

loc_80739C48:
{
    r28 = (r28 + 1);
}

loc_80739C4C:
{
    r0 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80739C54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80739C00;
    }
}

loc_80739C58:
{
    r3 = r29;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xFE00001B gpr_write=0xFE00001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80739BD0 func_80739BD0 preserves=true fpr_mask=0x00000000
