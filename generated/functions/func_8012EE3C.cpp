#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012EE3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012EE3C;

loc_8012EE3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80280000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8012EE4C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 9944);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012EED4;
    }
}

loc_8012EE5C:
{
    r31 = (r3 + -8);
    r0 = (r31 & 1);
}

loc_8012EE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EE70;
    }
}

loc_8012EE68:
{
    r0 = 0;
    goto loc_8012EE9C;
}

loc_8012EE70:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8012EE78:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_8012EE98;
    }
}

loc_8012EE7C:
{
    r4 = 0x80310000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r4 = (r4 + -26176);
    r4 = (r4 + 196608);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r4 + -30232));
    goto loc_8012EE9C;
}

loc_8012EE98:
{
    r0 = 0;
}

loc_8012EE9C:
{
    r4 = (r3 + r0);
    r0 = (r4 & 1);
}

loc_8012EEA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EEB0;
    }
}

loc_8012EEA8:
{
    r0 = 1;
    goto loc_8012EECC;
}

loc_8012EEB0:
{
    r3 = -574947328;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -8774);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_8012EECC:
{
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012EED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012EEEC;
    }
}

loc_8012EED4:
{
    r3 = 65536;
    r4 = (r5 + 48);
    r0 = (r3 + -1);
    r3 = (r0 & 65535);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012EF98;
}

loc_8012EEEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8012EEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012EF10;
    }
}

loc_8012EEF8:
{
    r3 = 65536;
    r4 = (r5 + 72);
    r0 = (r3 + -4);
    r3 = (r0 & 65535);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012EF98;
}

loc_8012EF10:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8012EF18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012EF34;
    }
}

loc_8012EF1C:
{
    r3 = 65536;
    r4 = (r5 + 92);
    r0 = (r3 + -3);
    r3 = (r0 & 65535);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012EF98;
}

loc_8012EF34:
{
    ctx->lr = 0x8012EF38u;
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
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r3 = 0x80310000u;
    r3 = (r3 + -26176);
    r3 = (r3 + 196608);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + -30236));
}

loc_8012EF58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012EF64;
    }
}

loc_8012EF5C:
{
    MemoryInline::FlatWrite32(r3, r31);
    goto loc_8012EF68;
}

loc_8012EF64:
{
    MemoryInline::FlatWrite32((r4 + -30240), r31);
}

loc_8012EF68:
{
    MemoryInline::FlatWrite32((r4 + -30236), r31);
    r3 = 0;
    r0 = 240;
    MemoryInline::FlatWrite32(r31, r3);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r4 + -30228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8012EF88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012EF94;
    }
}

loc_8012EF8C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + -30228), static_cast<uint16_t>(r0));
}

loc_8012EF94:
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
}

loc_8012EF98:
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012EE3C func_8012EE3C preserves=true fpr_mask=0x00000000
