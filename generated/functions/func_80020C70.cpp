#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80020C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80020C70;

loc_80020C70:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r3, r0);
    r0 = 0;
    r5 = 0x80000000u;
    MemoryInline::FlatWrite32(r4, r0);
    r7 = MemoryInline::FlatRead32((r5 + 220));
    r0 = (r7 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80020C90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80020C94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80020C98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80020C9C:
{
    r0 = (r7 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80020CA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80020CAC;
    }
}

loc_80020CA8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80020CAC:
{
    r6 = 0;
    goto loc_80020CF0;
}

loc_80020CB4:
{
    r0 = MemoryInline::FlatRead32((r5 + 228));
}

loc_80020CBC:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80020CC4;
    }
}

loc_80020CC0:
{
    MemoryInline::FlatWrite32(r4, r6);
}

loc_80020CC4:
{
    r0 = MemoryInline::FlatRead32((r7 + 764));
    r6 = (r6 + 1);
    r7 = (r0 | -2147483648);
    r0 = (r7 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80020CD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020CF8;
    }
}

loc_80020CDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80020CE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020CF8;
    }
}

loc_80020CE4:
{
    r0 = (r7 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80020CEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020CF8;
    }
}

loc_80020CF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80020CF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80020CB4;
    }
}

loc_80020CF8:
{
    MemoryInline::FlatWrite32(r3, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80020C70 func_80020C70 preserves=true fpr_mask=0x00000000
