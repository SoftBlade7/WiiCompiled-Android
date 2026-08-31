#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AFF80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800AFF80;

loc_800AFF80:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6 = 0;
    r0 = (r6 ^ -2147483648);
    r5 = (r5 + r4);
    r4 = (r5 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r4_not_0 = ~(r0);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_1 = ~(r0);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r4_not_1 + r0);
    r4 = (r4 + r4_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AFFB0;
    }
}

loc_800AFFA4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_800AFFC8;
}

loc_800AFFB0:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800AFFBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFFC4;
    }
}

loc_800AFFC0:
{
    r5 = r0;
}

loc_800AFFC4:
{
    MemoryInline::FlatWrite32(r3, r5);
}

loc_800AFFC8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AFF80 func_800AFF80 preserves=true fpr_mask=0x00000000
