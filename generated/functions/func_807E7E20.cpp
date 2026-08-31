#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E7E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_807E7EB0_loc_0 = 0;
    uint32_t addr_lhax_807E7EB4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807E7E20;

loc_807E7E20:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = (r4 + -24);
}

loc_807E7E2C:
{
    r7 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r7 = (r7 + -29648);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_807E7E58;
    }
}

loc_807E7E3C:
{
    r0 = (r4 + -30);
}

loc_807E7E44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_807E7E60;
    }
}

loc_807E7E48:
{
    r0 = (r4 + -36);
}

loc_807E7E50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_807E7E68;
    }
}

loc_807E7E54:
{
    goto loc_807E7E6C;
}

loc_807E7E58:
{
    r4 = 24;
    goto loc_807E7E6C;
}

loc_807E7E60:
{
    r4 = 25;
    goto loc_807E7E6C;
}

loc_807E7E68:
{
    r4 = 26;
}

loc_807E7E6C:
{
    r0 = 7;
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r12 = (r12_rot_0 & -4);
    r9 = (r1 + 16);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r11 = (r11_rot_0 & -4);
    f4.d = MemoryInline::FlatReadFloat64((r7 + 112));
    r31 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r7 + 100));
    r8 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 104));
    r10 = 0;
    r5 = 1127219200;
    ctr = r0;
}

loc_807E7E9C:
{
    r4 = MemoryInline::FlatRead32((r3 + 376));
}

loc_807E7EA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 380));
    r11_addr_2 = (r11 + r4);
    r6 = MemoryInline::FlatRead32(r11_addr_2);
    r12_addr_2 = (r12 + r0);
    r4 = MemoryInline::FlatRead32(r12_addr_2);
    addr_lhax_807E7EB0_loc_0 = (r6 + r8);
    r6 = MemoryInline::FlatRead16(addr_lhax_807E7EB0_loc_0);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    addr_lhax_807E7EB4_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_807E7EB4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32(r9, r0);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_807E7ED0;
    }
}

loc_807E7EC4:
{
    r4 = MemoryInline::FlatRead32(r9);
    r0 = (r4 + 5);
    MemoryInline::FlatWrite32(r9, r0);
}

loc_807E7ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807E7ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E7EE0;
    }
}

loc_807E7ED8:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 92));
    goto loc_807E7EE4;
}

loc_807E7EE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 96));
}

loc_807E7EE4:
{
    r4 = MemoryInline::FlatRead32(r9);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    r8 = (r8 + 2);
    r4 = (r4 + 5);
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r4 = (r0 + r10);
    r4 = MemoryInline::FlatRead32((r4 + 372));
    r10 = (r10 + 380);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r9 = (r9 + 4);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r31 = (r31 + 1);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807E7E9C;
    }
}

loc_807E7F38:
{
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FF3 gpr_return=0x00000010 fpr_read=0x00000015 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807E7E20 func_807E7E20 preserves=true fpr_mask=0x00000000
