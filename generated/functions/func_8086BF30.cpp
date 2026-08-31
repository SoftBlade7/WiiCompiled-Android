#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086BF30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_not_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086BF30;

loc_8086BF30:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r6 = 1127219200;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 272), 0, 48u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 276));
    r9 = MemoryInline::FlatRead32((r5 + 32));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 292));
    r9 = (r9 - r4);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 280));
    r0 = (r9 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    r4_not_0 = ~(r0);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r9 - r7);
    MemoryInline::FlatWriteRam32((r1 + 56), r6);
    r4 = (r0 & ~r4);
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r5 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
}

loc_8086BF8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086BF9C;
    }
}

loc_8086BF90:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8360));
    goto loc_8086C028;
}

loc_8086BF9C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 284));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8086BFA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086BFD8;
    }
}

loc_8086BFA8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 272));
    r4 = (r5 - r8);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r4 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 8392));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8086C028;
}

loc_8086BFD8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 288));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_8086BFE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086BFF0;
    }
}

loc_8086BFE4:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8364));
    goto loc_8086C028;
}

loc_8086BFF0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 272));
    r4 = (r5 - r4);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + 8392));
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8364));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8086C028:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 296));
    r4 = (r1 + 32);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 300));
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 304));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 308));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 312));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 316));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x8086C068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r31 + 320);
    MemoryInline::FlatWriteFloat32((r31 + 332), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 348), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 364), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000013B gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x8000000D fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8086BF30 func_8086BF30 preserves=true fpr_mask=0x00000000
