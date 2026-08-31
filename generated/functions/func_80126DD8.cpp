#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126DD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addic_src_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80126DD8;

loc_80126DD8:
{
    r4 = MemoryInline::FlatRead32((r13 + -26360));
    r4_addic_src_0 = r4;
    r4 = (r4_addic_src_0 + -36);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(-36)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80126DE0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80126DEC;
    }
}

loc_80126DE4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r4 = (r4 + r0);
}

loc_80126DEC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26364));
    r4 = (r4 - r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80126E00;
    }
}

loc_80126DF8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r4 = (r4 + r0);
}

loc_80126E00:
{
}

loc_80126E04:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r4))) {
        goto loc_80126E0C;
    }
}

loc_80126E08:
{
    r3 = r4;
}

loc_80126E0C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26364));
    r4 = MemoryInline::FlatRead32((r13 + -26356));
    r0 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80126E1C:
{
    MemoryInline::FlatWrite32((r13 + -26364), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80126E24:
{
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r13 + -26364), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80126DD8 func_80126DD8 preserves=true fpr_mask=0x00000000
