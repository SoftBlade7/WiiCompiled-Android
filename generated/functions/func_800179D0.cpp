#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800179D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r6_sthu_ea_0 = 0;
    uint32_t r6_sthu_ea_1 = 0;
    uint32_t r6_sthu_ea_2 = 0;
    uint32_t r6_sthu_ea_3 = 0;
    uint32_t r6_sthu_ea_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800179D0;

loc_800179D0:
{
    r4 = (r4 + -2);
    r6 = (r3 + -2);
    r5 = (r5 + 1);
    goto loc_80017A08;
}

loc_800179E0:
{
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r6_sthu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite16(r6_sthu_ea_2, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_2;
}

loc_800179EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80017A08;
    }
}

loc_800179F0:
{
    r0 = 0;
    goto loc_800179FC;
}

loc_800179F8:
{
    r6_sthu_ea_4 = (r6 + 2);
    MemoryInline::FlatWrite16(r6_sthu_ea_4, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_4;
}

loc_800179FC:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80017A00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800179F8;
    }
}

loc_80017A04:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80017A08:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80017A0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800179E0;
    }
}

loc_80017A10:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800179D0 func_800179D0 preserves=true fpr_mask=0x00000000
