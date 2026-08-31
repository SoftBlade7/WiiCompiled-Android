#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085E85C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085E85C;

loc_8085E85C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r3 + 18196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085E878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085E888;
    }
}

loc_8085E87C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 18200));
    goto loc_8085E9D0;
}

loc_8085E888:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r8 = 0;
    r0 = MemoryInline::FlatRead8((r6 + 36));
    r4 = (r6 + 40);
    r5 = (r6 + 3096);
    r9 = 0;
    r10 = 0;
    r31 = 1;
    goto loc_8085E9AC;
}

loc_8085E8BC:
{
    r11 = (r10 & 255);
    r29 = (r11 * 240);
    r30 = (r4 + r29);
    r11 = MemoryInline::FlatRead32((r30 + 204));
}

loc_8085E8D0:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(1))) {
        goto loc_8085E93C;
    }
}

loc_8085E8D4:
{
    r11 = MemoryInline::FlatRead32((r6 + 2928));
    r12 = 0;
    r11 = (r11 + -3);
}

loc_8085E8E4:
{
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(7))) {
        goto loc_8085E8F8;
    }
}

loc_8085E8E8:
{
    r11 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r11));
    r11 = (r11 & 193);
}

loc_8085E8F0:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8085E8F8;
    }
}

loc_8085E8F4:
{
    r12 = 1;
}

loc_8085E8F8:
{
}

loc_8085E8FC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8085E918;
    }
}

loc_8085E900:
{
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r11 = (r11_rot_2 & 1020);
    r12_addr_2 = (r12 + r11);
    r11 = MemoryInline::FlatRead32(r12_addr_2);
    r11 = MemoryInline::FlatRead16((r11 + 34));
    r7 = (r7 + r11);
    goto loc_8085E9A8;
}

loc_8085E918:
{
    r12 = (r5 + r29);
    r11 = MemoryInline::FlatRead16((r30 + 216));
    r12 = MemoryInline::FlatRead16((r12 + 218));
    r11 = (r12 - r11);
    r7 = (r7 + r12);
}

loc_8085E930:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r11))) {
        goto loc_8085E9A8;
    }
}

loc_8085E934:
{
    r9 = r11;
    goto loc_8085E9A8;
}

loc_8085E93C:
{
}

loc_8085E940:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8085E9A8;
    }
}

loc_8085E944:
{
    r11 = MemoryInline::FlatRead32((r6 + 2928));
    r12 = 0;
    r11 = (r11 + -3);
}

loc_8085E954:
{
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(7))) {
        goto loc_8085E968;
    }
}

loc_8085E958:
{
    r11 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r11));
    r11 = (r11 & 193);
}

loc_8085E960:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8085E968;
    }
}

loc_8085E964:
{
    r12 = 1;
}

loc_8085E968:
{
}

loc_8085E96C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8085E988;
    }
}

loc_8085E970:
{
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r11 = (r11_rot_3 & 1020);
    r12_addr_3 = (r12 + r11);
    r11 = MemoryInline::FlatRead32(r12_addr_3);
    r11 = MemoryInline::FlatRead16((r11 + 34));
    r8 = (r8 + r11);
    goto loc_8085E9A8;
}

loc_8085E988:
{
    r12 = (r5 + r29);
    r11 = MemoryInline::FlatRead16((r30 + 216));
    r12 = MemoryInline::FlatRead16((r12 + 218));
    r11 = (r12 - r11);
    r8 = (r8 + r12);
}

loc_8085E9A0:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r11))) {
        goto loc_8085E9A8;
    }
}

loc_8085E9A4:
{
    r9 = r11;
}

loc_8085E9A8:
{
    r10 = (r10 + 1);
}

loc_8085E9AC:
{
    r11 = (r10 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
}

loc_8085E9B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085E8BC;
    }
}

loc_8085E9B8:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r3 = (r8 - r7);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r5 + 18196), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 18200), r3);
}

loc_8085E9D0:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8085E85C func_8085E85C preserves=true fpr_mask=0x00000000
