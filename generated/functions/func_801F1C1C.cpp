#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F1C1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F1C1C;

loc_801F1C1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1C28:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1C4C;
    }
}

loc_801F1C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F1C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1C4C;
    }
}

loc_801F1C3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801F1C40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1C4C;
    }
}

loc_801F1C44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801F1C48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1C54;
    }
}

loc_801F1C4C:
{
    r3 = 1;
    goto loc_801F1D58;
}

loc_801F1C54:
{
    r12 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F1C60:
{
    if ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(26))) {
        goto loc_801F1C6C;
    }
}

loc_801F1C64:
{
}

loc_801F1C68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F1C74;
    }
}

loc_801F1C6C:
{
    r0 = 1;
    goto loc_801F1D00;
}

loc_801F1C74:
{
    r8 = (r12 * 56);
    r9 = 0x80360000u;
    r0 = 13;
    r9 = (r9 + -23936);
    r8 = (r9 + r8);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r11 = (r11_rot_0 & 65535);
    r10 = (r8 + 420);
    r8 = 0;
    ctr = r0;
}

loc_801F1C98:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r31 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801F1CA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r10))) {
        goto loc_801F1CB8;
    }
}

loc_801F1CAC:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_801F1CB4:
{
    if ((static_cast<uint32_t>(r11) == static_cast<uint32_t>(r0))) {
        goto loc_801F1CE4;
    }
}

loc_801F1CB8:
{
    r8 = (r8 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r31 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801F1CCC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r10))) {
        goto loc_801F1CDC;
    }
}

loc_801F1CD0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_801F1CD8:
{
    if ((static_cast<uint32_t>(r11) == static_cast<uint32_t>(r0))) {
        goto loc_801F1CE4;
    }
}

loc_801F1CDC:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F1C98;
    }
}

loc_801F1CE4:
{
    r9 = (r8 & 65535);
    r8 = 26;
    r0 = (r9 + -26);
    r8 = (r9 | ~r8);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r8 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801F1D00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1D10;
    }
}

loc_801F1D08:
{
    r3 = r0;
    goto loc_801F1D58;
}

loc_801F1D10:
{
    r0 = (r12 * 56);
    r8 = 0x80360000u;
    r8 = (r8 + -23936);
    r31 = (r8 + r0);
    r8 = MemoryInline::FlatRead32((r31 + 424));
    r12 = MemoryInline::FlatRead32((r8 + 20));
    ctr = r12;
    ctx->lr = 0x801F1D30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1D34:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1D54;
    }
}

loc_801F1D3C:
{
    r3 = MemoryInline::FlatRead32((r31 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1D44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1D4C;
    }
}

loc_801F1D48:
{
    // inline leaf 0x801F3EAC (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    // end of inlined leaf 0x801F3EAC
}

loc_801F1D4C:
{
    r3 = 21;
    goto loc_801F1D58;
}

loc_801F1D54:
{
    r3 = 0;
}

loc_801F1D58:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F1C1C func_801F1C1C preserves=true fpr_mask=0x00000000
