#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E163C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E163C;

loc_805E163C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 + -2);
}

loc_805E1650:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r6;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805E1690;
    }
}

loc_805E166C:
{
}

loc_805E1670:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_805E1684;
    }
}

loc_805E1674:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead32((r3 + 84));
    goto loc_805E16C0;
}

loc_805E1684:
{
    r0 = (r4 + -7);
}

loc_805E168C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(29))) {
        goto loc_805E1698;
    }
}

loc_805E1690:
{
    r31 = MemoryInline::FlatRead32((r3 + 100));
    goto loc_805E16C0;
}

loc_805E1698:
{
}

loc_805E169C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(37))) {
        goto loc_805E16A8;
    }
}

loc_805E16A0:
{
    r31 = MemoryInline::FlatRead32((r3 + 104));
    goto loc_805E16C0;
}

loc_805E16A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(38));
}

loc_805E16AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E16B8;
    }
}

loc_805E16B0:
{
    r31 = MemoryInline::FlatRead32((r3 + 108));
    goto loc_805E16C0;
}

loc_805E16B8:
{
    r3 = 0;
    goto loc_805E1728;
}

loc_805E16C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805E16C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E16D0;
    }
}

loc_805E16C8:
{
    r3 = 0;
    goto loc_805E1728;
}

loc_805E16D0:
{
    r30 = 0;
    goto loc_805E1718;
}

loc_805E16D8:
{
    r3 = r31;
    r4 = (r30 & 65535);
    // inline leaf 0x8051D084 (14 guest instruction(s))
}

loc_inl0_0x8051D084:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x8051D08C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8051D098;
    }
}

loc_inl0_0x8051D090:
{
    r3 = 0;
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D098:
{
    r4 = (r4 * 216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl0_0x8051D0A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8051D0B4;
    }
}

loc_inl0_0x8051D0AC:
{
    r3 = (r3 + r4);
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D0B4:
{
    r3 = 0;
}

loc_inl0_cont_8051D084:
{
    // end of inlined leaf 0x8051D084
}

loc_805E16E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805E1714;
    }
}

loc_805E16EC:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_805E16F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E1714;
    }
}

loc_805E16F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 196));
}

loc_805E1700:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r0))) {
        goto loc_805E1714;
    }
}

loc_805E1704:
{
    r0 = MemoryInline::FlatRead32((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_805E170C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E1714;
    }
}

loc_805E1710:
{
    goto loc_805E1728;
}

loc_805E1714:
{
    r30 = (r30 + 1);
}

loc_805E1718:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_805E1720:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E16D8;
    }
}

loc_805E1724:
{
    r3 = 0;
}

loc_805E1728:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E163C func_805E163C preserves=true fpr_mask=0x00000000
