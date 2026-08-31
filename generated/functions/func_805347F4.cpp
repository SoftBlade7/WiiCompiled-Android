#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805347F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805347F4;

loc_805347F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r12 = 0;
    r11 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r10 = 1;
    r8 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite16((r3 + 80), static_cast<uint16_t>(r0));
    goto loc_80534860;
}

loc_80534824:
{
    r7 = MemoryInline::FlatRead32((r11 + -10448));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7_addr_2 = (r7 + r0);
    r7 = MemoryInline::FlatRead32(r7_addr_2);
    r7 = MemoryInline::FlatRead32((r7 + 56));
    r0 = (r7 & 2);
}

loc_8053483C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80534848;
    }
}

loc_80534840:
{
    r0 = (r7 & 8);
}

loc_80534844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053485C;
    }
}

loc_80534848:
{
    r0 = (r12 & 255);
    r7 = MemoryInline::FlatRead16((r3 + 80));
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    r0 = (r7 | r0);
    MemoryInline::FlatWrite16((r3 + 80), static_cast<uint16_t>(r0));
}

loc_8053485C:
{
    r12 = (r12 + 1);
}

loc_80534860:
{
    r7 = MemoryInline::FlatRead32((r8 + -10456));
    r9 = (r12 & 255);
    r0 = MemoryInline::FlatRead8((r7 + 36));
}

loc_80534870:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r0))) {
        goto loc_80534824;
    }
}

loc_80534874:
{
    r7 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r7 = MemoryInline::FlatRead32((r7 + -10448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80534884:
{
    r0 = (r0 | 2);
    r8 = MemoryInline::FlatRead32((r3 + 64));
    r5 = MemoryInline::FlatRead8((r7 + 28));
    MemoryInline::FlatWrite8((r3 + 82), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWrite16((r8 + 4), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite8((r8 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::FlatWrite16((r8 + 8), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r8 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 68), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805348CC;
    }
}

loc_805348C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 56), r0);
}

loc_805348CC:
{
    r5 = MemoryInline::FlatRead8((r3 + 8));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = (r5 * 240);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 46));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_805348EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534908;
    }
}

loc_805348F0:
{
    r4 = 0x809C0000u;
    r0 = (r5 * 384);
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = (r4 + r0);
    r0 = (r4 + 948);
    MemoryInline::FlatWrite32((r3 + 72), r0);
}

loc_80534908:
{
    r3 = MemoryInline::FlatRead8((r3 + 8));
    ctx->lr = 0x80534910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    ctx->lr = 0x80534920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80533C6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805347F4 func_805347F4 preserves=true fpr_mask=0x00000000
