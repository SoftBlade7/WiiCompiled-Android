#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021828(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_adde_left_0 = 0;
    uint32_t r3_adde_left_1 = 0;
    uint32_t r3_adde_left_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r4_adde_left_0 = 0;
    uint32_t r4_adde_left_1 = 0;
    uint32_t r4_adde_left_2 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_adde_right_1 = 0;
    uint32_t r4_adde_right_2 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r7_adde_left_0 = 0;
    uint32_t r7_adde_left_1 = 0;
    uint32_t r7_adde_left_2 = 0;
    uint32_t r7_adde_right_0 = 0;
    uint32_t r7_adde_right_1 = 0;
    uint32_t r7_adde_right_2 = 0;
    uint32_t r7_addic_src_0 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r8_adde_left_0 = 0;
    uint32_t r8_adde_left_1 = 0;
    uint32_t r8_adde_left_2 = 0;
    uint32_t r8_adde_right_0 = 0;
    uint32_t r8_adde_right_1 = 0;
    uint32_t r8_adde_right_2 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_not_0 = 0;
    uint32_t r9_not_1 = 0;
    uint32_t r9_not_2 = 0;
    uint32_t r9_subfic_ra_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80021828;

loc_80021828:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8002182C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002183C;
    }
}

loc_80021838:
{
    r0 = (r9 + 32);
}

loc_8002183C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80021840:
{
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r10 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80021850;
    }
}

loc_8002184C:
{
    r9 = (r10 + 32);
}

loc_80021850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r9));
}

loc_80021854:
{
    r10 = (64 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80021908;
    }
}

loc_8002185C:
{
    r9 = (r9 + 1);
    r9_subfic_ra_0 = r9;
    r9 = (64 - r9_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r9_subfic_ra_0) ? 1u : 0u) << 29);
    r0 = (r0 + r9);
    r9 = (r10 - r9);
    ctr = r9;
}

loc_80021874:
{
    r7 = (r9 + -32);
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(32))) {
        goto loc_80021888;
    }
}

loc_8002187C:
{
    r8 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r7 = 0;
    goto loc_8002189C;
}

loc_80021888:
{
    r8 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r7 = (32 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r7 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r8 = (r8 | r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
}

loc_8002189C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_800218A0:
{
    r9 = (r0 + -32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-32)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800218B4;
    }
}

loc_800218A8:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r4 = 0;
    goto loc_800218C8;
}

loc_800218B4:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (32 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r9 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r9);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800218C8:
{
    r10 = -1;
    r7_addic_src_0 = r7;
    r7 = (r7_addic_src_0 + 0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800218D0:
{
    r4_adde_left_2 = r4;
    r4_adde_right_2 = r4;
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_adde_left_2 + r4_adde_right_2);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_left_2 = r3;
    r3_adde_right_2 = r3;
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_2 + r3_adde_right_2);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r8_adde_left_2 = r8;
    r8_adde_right_2 = r8;
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r8_adde_left_2 + r8_adde_right_2);
    r8 = (r8 + r8_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r8_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r8_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_adde_left_2 = r7;
    r7_adde_right_2 = r7;
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r7_adde_left_2 + r7_adde_right_2);
    r7 = (r7 + r7_ca_2);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r9_not_2 = ~(r5);
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r9_not_2 + r7);
    r9 = (r9 + r9_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800218F8;
    }
}

loc_800218EC:
{
    r8 = r0;
    r7 = r9;
    r0 = (r10 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800218F8:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800218D0;
    }
}

loc_800218FC:
{
    r4 = r8;
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80021908:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000006F9 gpr_write=0x00000799 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80021828 func_80021828 preserves=true fpr_mask=0x00000000
