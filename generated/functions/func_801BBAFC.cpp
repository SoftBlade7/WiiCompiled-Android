#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BBAFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BBAFC;

loc_801BBAFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801BBB14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BBB44;
    }
}

loc_801BBB18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BBB2C;
    }
}

loc_801BBB1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801BBB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BBB50;
    }
}

loc_801BBB24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BBB38;
    }
}

loc_801BBB28:
{
    goto loc_801BBB5C;
}

loc_801BBB2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801BBB30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BBB38;
    }
}

loc_801BBB34:
{
    goto loc_801BBB5C;
}

loc_801BBB38:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -24576), r0);
    goto loc_801BBB64;
}

loc_801BBB44:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24576), r0);
    goto loc_801BBB64;
}

loc_801BBB50:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24576), r0);
    goto loc_801BBB64;
}

loc_801BBB5C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24576), r0);
}

loc_801BBB64:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_0 & 8160);
    r4 = 1;
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    r4 = (r1 + 8);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r5 = 2;
    ctx->lr = 0x801BBB88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BB52Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    ctx->lr = 0x801BBB90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BB0E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF026CB gpr_write=0xFFF00FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BBAFC func_801BBAFC preserves=true fpr_mask=0x00000000
