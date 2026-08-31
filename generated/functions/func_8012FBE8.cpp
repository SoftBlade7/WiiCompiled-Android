#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FBE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012FBE8;

loc_8012FBE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r29 = r4;
    r31 = r5;
    // inline leaf 0x8013025C (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x8013025C
}

loc_8012FC10:
{
    r28 = r3;
    r30 = 0;
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(0))) {
        goto loc_8012FC20;
    }
}

loc_8012FC1C:
{
    r29 = 1;
}

loc_8012FC20:
{
    r0 = (0 - r31);
    r0 = (r0 | r31);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r31 = (r29 & r0);
    ctx->lr = 0x8012FC34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r4 = 0x80310000u;
    r3 = 0x80000000u;
    r4 = (r4 + -26176);
    r5 = (r4 + 196608);
    r4 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r5 + -30664));
    r0 = MemoryInline::FlatRead32((r5 + -30660));
    r3 = (r0 - r3);
    r0 = (r4 - r3);
}

loc_8012FC5C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r29))) {
        goto loc_8012FC64;
    }
}

loc_8012FC60:
{
    r4 = (r29 + r3);
}

loc_8012FC64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(1));
}

loc_8012FC68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012FC9C;
    }
}

loc_8012FC6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FCBC;
    }
}

loc_8012FC70:
{
}

loc_8012FC74:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_8012FC7C;
    }
}

loc_8012FC78:
{
    goto loc_8012FCBC;
}

loc_8012FC7C:
{
    r3 = 0x80310000u;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r3 = (r3 + -26176);
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    MemoryInline::FlatWriteRam32((r3 + -30592), r31);
    MemoryInline::FlatWriteRam32((r3 + -30624), r4);
    goto loc_8012FCC0;
}

loc_8012FC9C:
{
    r3 = 0x80310000u;
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r3 = (r3 + -26176);
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    MemoryInline::FlatWriteRam32((r3 + -30528), r31);
    MemoryInline::FlatWriteRam32((r3 + -30560), r4);
    goto loc_8012FCC0;
}

loc_8012FCBC:
{
    r30 = 1;
}

loc_8012FCC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8012FCC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FD1C;
    }
}

loc_8012FCC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8012FCCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012FD1C;
    }
}

loc_8012FCD0:
{
    r3 = 0x80310000u;
    r3 = (r3 + -26176);
    r3 = (r3 + 196608);
    r4 = MemoryInline::FlatRead32((r3 + -30660));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8012FCE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012FCFC;
    }
}

loc_8012FCE8:
{
    r0 = MemoryInline::FlatRead32((r3 + -30664));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8012FCF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FD1C;
    }
}

loc_8012FCF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012FCF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012FD1C;
    }
}

loc_8012FCFC:
{
    r3 = 0x80310000u;
    r3 = (r3 + -26176);
    r3 = (r3 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -30664));
    r0 = (r4 - r0);
    r0 = (r29 + r0);
    MemoryInline::FlatWriteRam32((r3 + -30660), r0);
    MemoryInline::FlatWriteRam32((r3 + -30664), r29);
}

loc_8012FD1C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012FBE8 func_8012FBE8 preserves=true fpr_mask=0x00000000
