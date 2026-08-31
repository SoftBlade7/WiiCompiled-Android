#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012EBB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012EBB4;

loc_8012EBB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80310000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8012EBC4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -26176);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = (r4 + 84);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012EBFC;
    }
}

loc_8012EBDC:
{
    r3 = 65536;
    r4 = 0x80280000u;
    r0 = (r3 + -10);
    r3 = (r0 & 65535);
    r4 = (r4 + 9944);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    r3 = 0;
    goto loc_8012ED3C;
}

loc_8012EBFC:
{
    r4 = (r30 + 196608);
    r31 = 0;
    r5 = MemoryInline::FlatRead8((r4 + -30073));
    goto loc_8012EC38;
}

loc_8012EC0C:
{
    r4 = (r31 & 255);
    r4 = (r4 + 196608);
    r0 = (r4 + -30082);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & -16);
    r4 = (r4 + 196608);
    r0 = (r4 + -30316);
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(r30_addr_3);
}

loc_8012EC30:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_8012EC44;
    }
}

loc_8012EC34:
{
    r31 = (r31 + 1);
}

loc_8012EC38:
{
    r0 = (r31 & 255);
}

loc_8012EC40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_8012EC0C;
    }
}

loc_8012EC44:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_8012EC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012EC70;
    }
}

loc_8012EC50:
{
    r3 = 65536;
    r4 = 0x80280000u;
    r0 = (r3 + -9);
    r3 = (r0 & 65535);
    r4 = (r4 + 9968);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    r3 = 0;
    goto loc_8012ED3C;
}

loc_8012EC70:
{
    ctx->lr = 0x8012EC74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = (r30 + 196608);
    r5 = 1;
    r7 = MemoryInline::FlatRead8((r6 + -30073));
    goto loc_8012ED28;
}

loc_8012EC84:
{
    r4 = (r31 & 255);
    r3 = MemoryInline::FlatRead16((r6 + -30084));
    r4 = (r4 + 196608);
    r0 = (r4 + -30082);
    r30_addr_6 = (r30 + r0);
    r4 = MemoryInline::FlatRead8(r30_addr_6);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012ED24;
    }
}

loc_8012ECA4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 4080);
    r4 = (r6 + r0);
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = MemoryInline::FlatRead16((r4 + -30314));
}

loc_8012ECB8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8012ED24;
    }
}

loc_8012ECBC:
{
    r30 = MemoryInline::FlatRead32((r4 + -30324));
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8012ECC8:
{
    MemoryInline::FlatWrite32((r4 + -30324), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012ECD8;
    }
}

loc_8012ECD0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + -30320), r0);
}

loc_8012ECD8:
{
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -30312), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + -30310));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8012ECF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012ECFC;
    }
}

loc_8012ECF4:
{
    r0 = MemoryInline::FlatRead16((r4 + -30312));
    MemoryInline::FlatWrite16((r4 + -30310), static_cast<uint16_t>(r0));
}

loc_8012ECFC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    // inline leaf 0x8013025C (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x8013025C
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r3));
    r4 = 1;
    r0 = 0;
    r3 = (r30 + 8);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_8012ED3C;
}

loc_8012ED24:
{
    r31 = (r31 + 1);
}

loc_8012ED28:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_8012ED30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012EC84;
    }
}

loc_8012ED34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 0;
}

loc_8012ED3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012EBB4 func_8012EBB4 preserves=true fpr_mask=0x00000000
