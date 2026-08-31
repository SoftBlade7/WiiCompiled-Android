#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052AD80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052AD80;

loc_8052AD80:
{
    r6 = MemoryInline::FlatRead16((r3 + 8));
    r7 = 0;
    r8 = 0;
    goto loc_8052ADF4;
}

loc_8052AD90:
{
    r0 = (r8 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 36);
    r4 = 0;
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_8052ADAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8052ADBC;
    }
}

loc_8052ADB0:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_8052ADB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8052ADC0;
    }
}

loc_8052ADBC:
{
    r4 = 1;
}

loc_8052ADC0:
{
}

loc_8052ADC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052ADF0;
    }
}

loc_8052ADC8:
{
}

loc_8052ADCC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8052ADE4;
    }
}

loc_8052ADD0:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r4 + r0);
}

loc_8052ADE0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_8052ADF0;
    }
}

loc_8052ADE4:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r4 + r0);
}

loc_8052ADF0:
{
    r8 = (r8 + 1);
}

loc_8052ADF4:
{
    r0 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8052ADFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052AD90;
    }
}

loc_8052AE00:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001B9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052AD80 func_8052AD80 preserves=true fpr_mask=0x00000000
