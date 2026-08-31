#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CA068(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addc_left_0 = 0;
    uint32_t r4_addc_left_1 = 0;
    uint32_t r4_addc_left_2 = 0;
    uint32_t r4_addc_left_3 = 0;
    uint32_t r4_addc_left_4 = 0;
    uint32_t r9_adde_left_0 = 0;
    uint32_t r9_adde_left_1 = 0;
    uint32_t r9_adde_left_2 = 0;
    uint32_t r9_adde_left_3 = 0;
    uint32_t r9_adde_left_4 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_ca_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805CA068;

loc_805CA068:
{
    r0 = MemoryInline::FlatRead32((r3 + 476));
    r4 = 0;
    r9 = 0;
    r8 = 0;
    r7 = 10;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805CA084:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805CA0C0;
    }
}

loc_805CA088:
{
    r0 = MemoryInline::FlatRead32((r3 + 624));
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r7)) >> 32));
    r5 = (r0 + r8);
    r5 = MemoryInline::FlatRead32((r5 + 372));
    r0 = (r9 * r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805CA0A0:
{
    r4 = (r4 * 10);
    r9 = (r6 + r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CA0B8;
    }
}

loc_805CA0AC:
{
    r0 = (static_cast<int32_t>(r5) >> 31);
    r4_addc_left_2 = r4;
    r4 = (r4_addc_left_2 + r5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r9_adde_left_2 = r9;
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r9_adde_left_2 + r0);
    r9 = (r9 + r9_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_805CA0B8:
{
    r8 = (r8 + 376);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805CA088;
    }
}

loc_805CA0C0:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805CA068 func_805CA068 preserves=true fpr_mask=0x00000000
