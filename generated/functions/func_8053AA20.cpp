#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053AA20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053AA20;

loc_8053AA20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8053AA24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8053AA28:
{
    r0 = 4;
    r3 = r4;
    r9 = 0;
    r10 = 0;
    ctr = r0;
}

loc_8053AA3C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_8053AA44:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8053AA74;
    }
}

loc_8053AA48:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8053AA50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8053AA74;
    }
}

loc_8053AA54:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8053AA5C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8053AA74;
    }
}

loc_8053AA60:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8053AA68:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_8053AA74;
    }
}

loc_8053AA6C:
{
    r9 = 1;
    goto loc_8053AB34;
}

loc_8053AA74:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r10 = (r10 + 1);
}

loc_8053AA80:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8053AAB0;
    }
}

loc_8053AA84:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8053AA8C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8053AAB0;
    }
}

loc_8053AA90:
{
    r0 = MemoryInline::FlatRead8((r3 + 14));
}

loc_8053AA98:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8053AAB0;
    }
}

loc_8053AA9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_8053AAA4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_8053AAB0;
    }
}

loc_8053AAA8:
{
    r9 = 1;
    goto loc_8053AB34;
}

loc_8053AAB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
    r10 = (r10 + 1);
}

loc_8053AABC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8053AAEC;
    }
}

loc_8053AAC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8053AAC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8053AAEC;
    }
}

loc_8053AACC:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_8053AAD4:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8053AAEC;
    }
}

loc_8053AAD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
}

loc_8053AAE0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_8053AAEC;
    }
}

loc_8053AAE4:
{
    r9 = 1;
    goto loc_8053AB34;
}

loc_8053AAEC:
{
    r0 = MemoryInline::FlatRead16((r3 + 28));
    r10 = (r10 + 1);
}

loc_8053AAF8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8053AB28;
    }
}

loc_8053AAFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8053AB04:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8053AB28;
    }
}

loc_8053AB08:
{
    r0 = MemoryInline::FlatRead8((r3 + 30));
}

loc_8053AB10:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8053AB28;
    }
}

loc_8053AB14:
{
    r0 = MemoryInline::FlatRead8((r3 + 31));
}

loc_8053AB1C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_8053AB28;
    }
}

loc_8053AB20:
{
    r9 = 1;
    goto loc_8053AB34;
}

loc_8053AB28:
{
    r10 = (r10 + 1);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053AA3C;
    }
}

loc_8053AB34:
{
}

loc_8053AB38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(7))) {
        goto loc_8053AB88;
    }
}

loc_8053AB3C:
{
    r0 = 16;
    r3 = r4;
    r10 = 0;
    ctr = r0;
}

loc_8053AB4C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8053AB54:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8053AB7C;
    }
}

loc_8053AB58:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r9 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_1, r5);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r8));
    goto loc_8053AB88;
}

loc_8053AB7C:
{
    r10 = (r10 + 1);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053AB4C;
    }
}

loc_8053AB88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8053AB8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8053AB90:
{
    r0 = 16;
    r3 = r4;
    r9 = 0;
    ctr = r0;
}

loc_8053ABA0:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053ABA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053ABCC;
    }
}

loc_8053ABAC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_3, r5);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r8));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8053ABCC:
{
    r9 = (r9 + 1);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053ABA0;
    }
}

loc_8053ABD8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x00000609 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053AA20 func_8053AA20 preserves=true fpr_mask=0x00000000
