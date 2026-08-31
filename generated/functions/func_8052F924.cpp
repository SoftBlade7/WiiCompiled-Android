#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052F924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052F924;

loc_8052F924:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 2896));
}

loc_8052F940:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(4))) {
        goto loc_8052F94C;
    }
}

loc_8052F944:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_8052F948:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052F954;
    }
}

loc_8052F94C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8052F950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F974;
    }
}

loc_8052F954:
{
    r4 = 1956773888;
    r0 = (r4 + -20331);
    MemoryInline::FlatWrite32((r3 + 2932), r0);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536805376);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_2 = (r0_rot_5 & 31);
    r0_mdest_2 = (r0 & -32);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r31 + 2936), r0);
    goto loc_8052F9F8;
}

loc_8052F974:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052F97C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F9A0;
    }
}

loc_8052F980:
{
    r4 = 0x92BC0000u;
    r0 = (r4 + 32003);
    MemoryInline::FlatWrite32((r3 + 2932), r0);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & 536805376);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_0 = (r0_rot_1 & 31);
    r0_mdest_0 = (r0 & -32);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r31 + 2936), r0);
    goto loc_8052F9F8;
}

loc_8052F9A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 2900));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8052F9A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F9F8;
    }
}

loc_8052F9AC:
{
}

loc_8052F9B0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(7))) {
        goto loc_8052F9C4;
    }
}

loc_8052F9B8:
{
}

loc_8052F9BC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(10))) {
        goto loc_8052F9C4;
    }
}

loc_8052F9C0:
{
    r0 = 1;
}

loc_8052F9C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052F9C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F9F8;
    }
}

loc_8052F9CC:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0 = (r0_rot_3 & 4095);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r5 = (r5_rot_1 & 16777216);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & -1);
    r0 = (r0 & 16711680);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r5_mrot_1 = (r5_rot_2 & 65280);
    r5_mdest_1 = (r5 & -65281);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r31 + 2932), r6);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r31 + 2936), r0);
}

loc_8052F9F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052F924 func_8052F924 preserves=true fpr_mask=0x00000000
