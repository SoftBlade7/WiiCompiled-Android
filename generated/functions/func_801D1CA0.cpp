#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D1CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_10 = 0;
    uint32_t r7_addr_11 = 0;
    uint32_t r7_addr_12 = 0;
    uint32_t r7_addr_13 = 0;
    uint32_t r7_addr_14 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D1CA0;

loc_801D1CA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D1CA4:
{
    r7 = 0x80250000u;
    r8 = -1;
    r7 = (r7 + 12112);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1DCC;
    }
}

loc_801D1CB4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D1CB8:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1D90;
    }
}

loc_801D1CC0:
{
    r9 = MemoryInline::FlatRead8(r3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 268435455);
    r0 = (r8 ^ r9);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r5 = (r5_rot_2 & 268435455);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 60);
    r9 = MemoryInline::FlatRead8((r3 + 1));
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
    r6 = (r6 ^ r0);
    r0 = (r6 ^ r5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r5 = (r5_rot_3 & 268435455);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 60);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_3 & 268435455);
    r7_addr_3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_3);
    r8 = (r6 ^ r0);
    r0 = (r8 ^ r9);
    r9 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 60);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r6 = (r6_rot_4 & 268435455);
    r7_addr_4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_4);
    r6 = (r6 ^ r0);
    r0 = (r6 ^ r5);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r5 = (r5_rot_4 & 268435455);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 60);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_5 & 268435455);
    r7_addr_5 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_5);
    r8 = (r6 ^ r0);
    r0 = (r8 ^ r9);
    r9 = MemoryInline::FlatRead8((r3 + 3));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 60);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r6 = (r6_rot_6 & 268435455);
    r7_addr_6 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_6);
    r3 = (r3 + 4);
    r6 = (r6 ^ r0);
    r0 = (r6 ^ r5);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r5 = (r5_rot_5 & 268435455);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 60);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_7 & 268435455);
    r7_addr_7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_7);
    r8 = (r6 ^ r0);
    r0 = (r8 ^ r9);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 60);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r6 = (r6_rot_8 & 268435455);
    r7_addr_8 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_8);
    r6 = (r6 ^ r0);
    r0 = (r6 ^ r5);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 60);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_9 & 268435455);
    r7_addr_9 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_9);
    r8 = (r6 ^ r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1CC0;
    }
}

loc_801D1D88:
{
    r4 = (r4 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D1D8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1DCC;
    }
}

loc_801D1D90:
{
    ctr = r4;
}

loc_801D1D94:
{
    r9 = MemoryInline::FlatRead8(r3);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r6 = (r6_rot_12 & 268435455);
    r3 = (r3 + 1);
    r0 = (r8 ^ r9);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r5 = (r5_rot_8 & 268435455);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & 60);
    r7_addr_12 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_12);
    r6 = (r6 ^ r0);
    r0 = (r6 ^ r5);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & 60);
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_13 & 268435455);
    r7_addr_13 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_13);
    r8 = (r6 ^ r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1D94;
    }
}

loc_801D1DCC:
{
    r3 = ~(r8 | r8);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D1CA0 func_801D1CA0 preserves=true fpr_mask=0x00000000
