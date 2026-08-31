#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ED54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012ED54;

loc_8012ED54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80310000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
}

loc_8012ED64:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -26176);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = (r4 + 84);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012ED88;
    }
}

loc_8012ED80:
{
    r3 = 0;
    goto loc_8012EE24;
}

loc_8012ED88:
{
    ctx->lr = 0x8012ED8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r31 = (r31_rot_1 & 4080);
    r0 = (r30 + 196608);
    r4 = (r0 + r31);
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = MemoryInline::FlatRead16((r4 + -30314));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8012EDA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012EE10;
    }
}

loc_8012EDA8:
{
    r31 = MemoryInline::FlatRead32((r4 + -30324));
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8012EDB4:
{
    MemoryInline::FlatWrite32((r4 + -30324), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012EDC4;
    }
}

loc_8012EDBC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + -30320), r0);
}

loc_8012EDC4:
{
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -30312), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + -30310));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8012EDDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012EDE8;
    }
}

loc_8012EDE0:
{
    r0 = MemoryInline::FlatRead16((r4 + -30312));
    MemoryInline::FlatWrite16((r4 + -30310), static_cast<uint16_t>(r0));
}

loc_8012EDE8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    // inline leaf 0x8013025C (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x8013025C
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    r4 = 1;
    r0 = 0;
    r3 = (r31 + 8);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_8012EE24;
}

loc_8012EE10:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r30 + 196608);
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead16((r3 + -30316));
    ctx->lr = 0x8012EE24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EBB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8012EE24:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000DB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012ED54 func_8012ED54 preserves=true fpr_mask=0x00000000
