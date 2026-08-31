#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018F75C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8018F784_loc_0 = 0;
    uint32_t addr_lhax_8018F794_loc_0 = 0;
    uint32_t addr_lhax_8018F7AC_loc_0 = 0;
    uint32_t addr_lhax_8018F7B4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018F75C;

loc_8018F75C:
{
    r4 = 0x80340000u;
    r7 = 0x80290000u;
    r0 = MemoryInline::FlatRead32((r4 + 19080));
    r7 = (r7 + -11256);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8018F774:
{
    r4 = (127 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(127) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018F7C0;
    }
}

loc_8018F77C:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r5 = (r7 + 2448);
    addr_lhax_8018F784_loc_0 = (r5 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F784_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r4 = (r7 + 2704);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    addr_lhax_8018F794_loc_0 = (r5 + r6);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F794_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead16((r7 + 2448));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r5 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    addr_lhax_8018F7AC_loc_0 = (r4 + r6);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F7AC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    addr_lhax_8018F7B4_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F7B4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8018F7C0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r7 + 1936);
    r6_addr_0 = (r6 + r0);
    r5 = MemoryInline::FlatRead32(r6_addr_0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r5);
    r6_addr_1 = (r6 + r4);
    r4 = MemoryInline::FlatRead32(r6_addr_1);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r4 = MemoryInline::FlatRead32((r7 + 1936));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r4 = MemoryInline::FlatRead32((r6 + 508));
    MemoryInline::FlatWrite32((r3 + 36), r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000A8 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8018F75C func_8018F75C preserves=true fpr_mask=0x00000000
