#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AC7CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801AC7CC;

loc_801AC7CC:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r8 = (r3 + 4);
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r0 = 64;
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    r31 = r3;
    ctr = r0;
}

loc_801AC7F0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r8);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r8 + 4));
        }
    }
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r8 + 8));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r8 + 12));
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r8 + 16));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r8 + 20));
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r8 + 24));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r8 + 28));
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r8 + 32));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r8 + 36));
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r8 + 40));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r8 + 44));
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r8 + 48));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r8 + 52));
    r7 = (r7 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r8 + 56));
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r8 + 60));
    r7 = (r7 + r4);
    r8 = (r8 + 64);
    r7 = (r7 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801AC7F0;
    }
}

loc_801AC878:
{
    r0 = MemoryInline::FlatRead32(r8);
    r6 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r1 + 8);
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r7 = (r7 + r5);
    r5 = MemoryInline::FlatRead32((r8 + 12));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 16));
    r7 = (r7 + r5);
    r5 = MemoryInline::FlatRead32((r8 + 20));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    r7 = (r7 + r5);
    r5 = 2;
    r7 = (r7 + r0);
    MemoryInline::FlatWrite32(r3, r7);
    r3 = (r6 + -13776);
    ctx->lr = 0x801AC8C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019C88Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AC8CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AC90C;
    }
}

loc_801AC8D0:
{
    r4 = r31;
    r3 = (r1 + 8);
    r5 = 4128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019B884u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4128));
}

loc_801AC8E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC8F8;
    }
}

loc_801AC8E8:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801AC910;
}

loc_801AC8F8:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_801AC910;
}

loc_801AC90C:
{
    r3 = 0;
}

loc_801AC910:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFE3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AC7CC func_801AC7CC preserves=true fpr_mask=0x00000000
