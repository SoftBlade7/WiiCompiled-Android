#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806730E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806730E4;

loc_806730E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r5 + -10424));
    r3 = MemoryInline::FlatRead16((r3 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 * 80);
    r6 = (r0 + r3);
    r5 = MemoryInline::FlatRead32((r6 + -30276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80673110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673128;
    }
}

loc_80673114:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80673124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673130;
    }
}

loc_80673128:
{
    r3 = 1;
    goto loc_80673160;
}

loc_80673130:
{
    r5 = r4;
    r4 = (r1 + 8);
    r6 = (r6 + -30272);
    r3 = 1947;
    ctx->lr = 0x80673144u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CB3E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80673148:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673158;
    }
}

loc_80673150:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80673154:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067315C;
    }
}

loc_80673158:
{
    r0 = 1;
}

loc_8067315C:
{
    r3 = r0;
}

loc_80673160:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80003FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806730E4 func_806730E4 preserves=true fpr_mask=0x00000000
