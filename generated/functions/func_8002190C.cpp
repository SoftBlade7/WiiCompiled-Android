#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002190C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r3_adde_left_0 = 0;
    uint32_t r3_adde_left_1 = 0;
    uint32_t r3_adde_left_2 = 0;
    uint32_t r3_adde_left_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_subfze_src_0 = 0;
    uint32_t r3_subfze_src_1 = 0;
    uint32_t r3_subfze_src_2 = 0;
    uint32_t r3_subfze_src_3 = 0;
    uint32_t r3_subfze_src_4 = 0;
    uint32_t r4_adde_left_0 = 0;
    uint32_t r4_adde_left_1 = 0;
    uint32_t r4_adde_left_2 = 0;
    uint32_t r4_adde_left_3 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_adde_right_1 = 0;
    uint32_t r4_adde_right_2 = 0;
    uint32_t r4_adde_right_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r4_subfic_ra_1 = 0;
    uint32_t r4_subfic_ra_2 = 0;
    uint32_t r4_subfic_ra_3 = 0;
    uint32_t r4_subfic_ra_4 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_subfze_src_0 = 0;
    uint32_t r5_subfze_src_1 = 0;
    uint32_t r5_subfze_src_2 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r7_adde_left_0 = 0;
    uint32_t r7_adde_left_1 = 0;
    uint32_t r7_adde_left_2 = 0;
    uint32_t r7_adde_left_3 = 0;
    uint32_t r7_adde_right_0 = 0;
    uint32_t r7_adde_right_1 = 0;
    uint32_t r7_adde_right_2 = 0;
    uint32_t r7_adde_right_3 = 0;
    uint32_t r7_addic_src_0 = 0;
    uint32_t r7_addic_src_1 = 0;
    uint32_t r7_addic_src_2 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r8_adde_left_0 = 0;
    uint32_t r8_adde_left_1 = 0;
    uint32_t r8_adde_left_2 = 0;
    uint32_t r8_adde_left_3 = 0;
    uint32_t r8_adde_right_0 = 0;
    uint32_t r8_adde_right_1 = 0;
    uint32_t r8_adde_right_2 = 0;
    uint32_t r8_adde_right_3 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_not_0 = 0;
    uint32_t r9_not_1 = 0;
    uint32_t r9_not_2 = 0;
    uint32_t r9_not_3 = 0;
    uint32_t r9_subfic_ra_0 = 0;
    uint32_t r9_subfic_ra_1 = 0;
    uint32_t r9_subfic_ra_2 = 0;

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

    goto loc_8002190C;

loc_8002190C:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80021910:
{
    if (((cr & 0x00000008u) == 0)) {
        goto loc_8002191C;
    }
}

loc_80021914:
{
    r4_subfic_ra_1 = r4;
    r4 = (0 - r4_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4_subfic_ra_1) ? 1u : 0u) << 29);
    r3_subfze_src_1 = r3;
    r3_not_1 = ~(r3_subfze_src_1);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8002191C:
{
}

loc_80021920:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8002192C;
    }
}

loc_80021924:
{
    r6_subfic_ra_1 = r6;
    r6 = (0 - r6_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r6_subfic_ra_1) ? 1u : 0u) << 29);
    r5_subfze_src_1 = r5;
    r5_not_1 = ~(r5_subfze_src_1);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8002192C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80021930:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80021940;
    }
}

loc_8002193C:
{
    r0 = (r9 + 32);
}

loc_80021940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80021944:
{
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r10 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80021954;
    }
}

loc_80021950:
{
    r9 = (r10 + 32);
}

loc_80021954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r9));
}

loc_80021958:
{
    r10 = (64 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80021A08;
    }
}

loc_80021960:
{
    r9 = (r9 + 1);
    r9_subfic_ra_1 = r9;
    r9 = (64 - r9_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r9_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = (r0 + r9);
    r9 = (r10 - r9);
    ctr = r9;
}

loc_80021978:
{
    r7 = (r9 + -32);
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(32))) {
        goto loc_8002198C;
    }
}

loc_80021980:
{
    r8 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r7 = 0;
    goto loc_800219A0;
}

loc_8002198C:
{
    r8 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r7 = (32 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r7 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r8 = (r8 | r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
}

loc_800219A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_800219A4:
{
    r9 = (r0 + -32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-32)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800219B8;
    }
}

loc_800219AC:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r4 = 0;
    goto loc_800219CC;
}

loc_800219B8:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (32 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r9 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r9);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800219CC:
{
    r10 = -1;
    r7_addic_src_1 = r7;
    r7 = (r7_addic_src_1 + 0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800219D4:
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
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_2 + r3_adde_right_2);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
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
        goto loc_800219FC;
    }
}

loc_800219F0:
{
    r8 = r0;
    r7 = r9;
    r0 = (r10 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800219FC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800219D4;
    }
}

loc_80021A00:
{
    r4 = r8;
    r3 = r7;
}

loc_80021A08:
{
    if (((cr & 0x00000008u) == 0)) {
        goto loc_80021A14;
    }
}

loc_80021A0C:
{
    r4_subfic_ra_3 = r4;
    r4 = (0 - r4_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4_subfic_ra_3) ? 1u : 0u) << 29);
    r3_subfze_src_3 = r3;
    r3_not_3 = ~(r3_subfze_src_3);
    r3_ca_6 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r3_ca_6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_6)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80021A14:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x81 cr_write=0x81 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8002190C func_8002190C preserves=true fpr_mask=0x00000000
