#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019C12C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8019C12C;

loc_8019C12C:
{
    r7 = 0;
    r0 = (r3 & 16);
}

loc_8019C134:
{
    MemoryInline::FlatWrite32(r4, r7);
    MemoryInline::FlatWrite32(r5, r7);
    MemoryInline::FlatWrite32(r6, r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C150;
    }
}

loc_8019C144:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8019C150:
{
    r0 = (r3 & 32);
}

loc_8019C154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C164;
    }
}

loc_8019C158:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8019C164:
{
    r0 = (r3 & 4);
}

loc_8019C168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C178;
    }
}

loc_8019C16C:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8019C178:
{
    r0 = (r3 & 8);
}

loc_8019C17C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C18C;
    }
}

loc_8019C180:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8019C18C:
{
    r0 = (r3 & 1);
}

loc_8019C190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019C1A0;
    }
}

loc_8019C194:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_8019C1A0:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019C1A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8019C1A8:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r6, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019C12C func_8019C12C preserves=true fpr_mask=0x00000000
