#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CA660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CA660;

loc_800CA660:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = 1374420992;
}

loc_800CA680:
{
    r0 = (r4 + -31457);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r0 = (r0 * 100);
    r3 = (r3 - r0);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800CA6AC;
    }
}

loc_800CA698:
{
}

loc_800CA69C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_800CA6E0;
    }
}

loc_800CA6A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_800CA6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CA768;
    }
}

loc_800CA6A8:
{
    goto loc_800CA7AC;
}

loc_800CA6AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(90));
}

loc_800CA6B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA6BC;
    }
}

loc_800CA6B4:
{
    r3 = 0;
    goto loc_800CA7B0;
}

loc_800CA6BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(94));
}

loc_800CA6C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA6CC;
    }
}

loc_800CA6C4:
{
    r3 = 1;
    goto loc_800CA7B0;
}

loc_800CA6CC:
{
    r0 = 96;
    r0_subfc_sub_2 = r0;
    r0 = (r3 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r3_not_2 = ~(r0);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r0);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + 3);
    goto loc_800CA7B0;
}

loc_800CA6E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(93));
}

loc_800CA6E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CA748;
    }
}

loc_800CA6E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA714;
    }
}

loc_800CA6EC:
{
}

loc_800CA6F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(86))) {
        goto loc_800CA708;
    }
}

loc_800CA6F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(83));
}

loc_800CA6F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA730;
    }
}

loc_800CA6FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CA700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA728;
    }
}

loc_800CA704:
{
    goto loc_800CA760;
}

loc_800CA708:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(90));
}

loc_800CA70C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA740;
    }
}

loc_800CA710:
{
    goto loc_800CA738;
}

loc_800CA714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(98));
}

loc_800CA718:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA760;
    }
}

loc_800CA71C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(96));
}

loc_800CA720:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA758;
    }
}

loc_800CA724:
{
    goto loc_800CA750;
}

loc_800CA728:
{
    r3 = 0;
    goto loc_800CA7B0;
}

loc_800CA730:
{
    r3 = 1;
    goto loc_800CA7B0;
}

loc_800CA738:
{
    r3 = 2;
    goto loc_800CA7B0;
}

loc_800CA740:
{
    r3 = 3;
    goto loc_800CA7B0;
}

loc_800CA748:
{
    r3 = 4;
    goto loc_800CA7B0;
}

loc_800CA750:
{
    r3 = 5;
    goto loc_800CA7B0;
}

loc_800CA758:
{
    r3 = 6;
    goto loc_800CA7B0;
}

loc_800CA760:
{
    r3 = 7;
    goto loc_800CA7B0;
}

loc_800CA768:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(78));
}

loc_800CA76C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA778;
    }
}

loc_800CA770:
{
    r3 = 0;
    goto loc_800CA7B0;
}

loc_800CA778:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(83));
}

loc_800CA77C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA788;
    }
}

loc_800CA780:
{
    r3 = 1;
    goto loc_800CA7B0;
}

loc_800CA788:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(93));
}

loc_800CA78C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA798;
    }
}

loc_800CA790:
{
    r3 = 3;
    goto loc_800CA7B0;
}

loc_800CA798:
{
    r0 = 98;
    r0_subfc_sub_1 = r0;
    r0 = (r3 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r3_not_1 = ~(r0);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r0);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + 7);
    goto loc_800CA7B0;
}

loc_800CA7AC:
{
    r3 = 0;
}

loc_800CA7B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CA660 func_800CA660 preserves=true fpr_mask=0x00000000
