#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013D960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013D960;

loc_8013D960:
{
    r3 = 0x80330000u;
    r12 = 0;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 1381));
}

loc_8013D974:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_8013D990;
    }
}

loc_8013D978:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1368));
    r0 = (r0 & 2);
}

loc_8013D988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013D990;
    }
}

loc_8013D98C:
{
    r12 = MemoryInline::FlatRead32((r3 + 1364));
}

loc_8013D990:
{
    r3 = 0x80330000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8013D998:
{
    r3 = (r3 + 25208);
    r0 = 0;
    r4 = 4;
    MemoryInline::FlatWriteRam8((r3 + 1368), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1380), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1376), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8013D9B4:
{
    r0 = (r4 * 284);
    r4 = 5;
    r5 = 12;
    r6 = 0;
    r3 = (r3 + r0);
    r3 = (r3 + 60);
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF8F gpr_write=0x00001079 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8013D960 func_8013D960 preserves=true fpr_mask=0x00000000
