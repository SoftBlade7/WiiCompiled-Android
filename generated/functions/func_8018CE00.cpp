#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018CE00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018CE00;

loc_8018CE00:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r4 = 1179189248;
    r11 = (r4 + 20038);
    r5 = 0;
    r4 = (r3 + r0);
    r6 = 0;
    r8 = 1413939200;
    r10 = 1129775104;
    r9 = 1129119744;
    r7 = 1196163072;
    goto loc_8018CF0C;
}

loc_8018CE2C:
{
    r12 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r11));
}

loc_8018CE34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018CE7C;
    }
}

loc_8018CE38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018CE5C;
    }
}

loc_8018CE3C:
{
    r0 = (r10 + 17480);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r0));
}

loc_8018CE44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018CEC8;
    }
}

loc_8018CE48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018CEF8;
    }
}

loc_8018CE4C:
{
    r0 = (r9 + 16720);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r0));
}

loc_8018CE54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018CEE0;
    }
}

loc_8018CE58:
{
    goto loc_8018CEF8;
}

loc_8018CE5C:
{
    r0 = (r8 + 19536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r0));
}

loc_8018CE64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018CEB8;
    }
}

loc_8018CE68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018CEF8;
    }
}

loc_8018CE6C:
{
    r0 = (r7 + 18258);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r0));
}

loc_8018CE74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018CF00;
    }
}

loc_8018CE78:
{
    goto loc_8018CEF8;
}

loc_8018CE7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r4 + 8);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8018CE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8018CEA0;
    }
}

loc_8018CE98:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_8018CEA0:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8018CEA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8018CF00;
    }
}

loc_8018CEAC:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_8018CF00;
}

loc_8018CEB8:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    goto loc_8018CF00;
}

loc_8018CEC8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8018CED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8018CF00;
    }
}

loc_8018CED4:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_8018CF00;
}

loc_8018CEE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8018CEE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8018CF00;
    }
}

loc_8018CEEC:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_8018CF00;
}

loc_8018CEF8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

loc_8018CF00:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r6 + 1);
    r4 = (r4 + r0);
}

loc_8018CF0C:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8018CF14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8018CE2C;
    }
}

loc_8018CF18:
{
    r4 = 1380319232;
    r0 = (r4 + 20053);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018CE00 func_8018CE00 preserves=true fpr_mask=0x00000000
