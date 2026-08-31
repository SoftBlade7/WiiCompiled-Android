#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C7C40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_10 = 0;
    uint32_t r30_rot_11 = 0;
    uint32_t r30_rot_12 = 0;
    uint32_t r30_rot_13 = 0;
    uint32_t r30_rot_14 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r30_rot_7 = 0;
    uint32_t r30_rot_8 = 0;
    uint32_t r30_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800C7C40;

loc_800C7C40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl0_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl0_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800BC3F4;
    }
}

loc_inl0_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl0_cont_800BC3E0;
}

loc_inl0_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl0_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    r5 = MemoryInline::FlatRead32((r3 + 104));
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 108));
    r8 = 0;
    r30 = MemoryInline::FlatRead16((r3 + 112));
    r0 = 2;
    r7 = MemoryInline::FlatRead32((r3 + 100));
    goto loc_800C7DAC;
}

loc_800C7C78:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(5120));
}

loc_800C7C7C:
{
    r9 = MemoryInline::FlatRead8(r5);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C7CDC;
    }
}

loc_800C7C84:
{
    MemoryInline::FlatWrite32((r3 + 104), r5);
    MemoryInline::FlatWrite32((r3 + 108), r6);
    MemoryInline::FlatWrite16((r3 + 112), static_cast<uint16_t>(r30));
    r3 = (r3 + 120);
    ctx->lr = 0x800C7C98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 120);
    r4 = (r31 + 96);
    // inline leaf 0x801A0D8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x801A0D8C
    r4 = 0x80000000u;
    r7 = 0x800C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + 31808);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & 1073741823);
    r3 = (r31 + 120);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 67108863);
    r6 = (r0 * 19);
    ctx->lr = 0x800C7CD8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A0870u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800C7DCC;
}

loc_800C7CDC:
{
    r10 = 0;
    ctr = r0;
    // nop
}

loc_800C7CE8:
{
    r4 = (r30 & 32768);
}

loc_800C7CEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7CFC;
    }
}

loc_800C7CF0:
{
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_3 & 65534);
    r30 = (r30 ^ 4129);
    goto loc_800C7D00;
}

loc_800C7CFC:
{
    r30_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_4 & 65534);
}

loc_800C7D00:
{
    r4 = (r9 & 128);
}

loc_800C7D04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D10;
    }
}

loc_800C7D08:
{
    r4 = (r30 ^ 1);
    r30 = (r4 & 65535);
}

loc_800C7D10:
{
    r4 = (r30 & 32768);
}

loc_800C7D14:
{
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 254);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D28;
    }
}

loc_800C7D1C:
{
    r30_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_6 & 65534);
    r30 = (r30 ^ 4129);
    goto loc_800C7D2C;
}

loc_800C7D28:
{
    r30_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_7 & 65534);
}

loc_800C7D2C:
{
    r4 = (r9 & 128);
}

loc_800C7D30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D3C;
    }
}

loc_800C7D34:
{
    r4 = (r30 ^ 1);
    r30 = (r4 & 65535);
}

loc_800C7D3C:
{
    r4 = (r30 & 32768);
}

loc_800C7D40:
{
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_4 & 254);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D54;
    }
}

loc_800C7D48:
{
    r30_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_9 & 65534);
    r30 = (r30 ^ 4129);
    goto loc_800C7D58;
}

loc_800C7D54:
{
    r30_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_10 & 65534);
}

loc_800C7D58:
{
    r4 = (r9 & 128);
}

loc_800C7D5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D68;
    }
}

loc_800C7D60:
{
    r4 = (r30 ^ 1);
    r30 = (r4 & 65535);
}

loc_800C7D68:
{
    r4 = (r30 & 32768);
}

loc_800C7D6C:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & 254);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D80;
    }
}

loc_800C7D74:
{
    r30_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_12 & 65534);
    r30 = (r30 ^ 4129);
    goto loc_800C7D84;
}

loc_800C7D80:
{
    r30_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_13 & 65534);
}

loc_800C7D84:
{
    r4 = (r9 & 128);
}

loc_800C7D88:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C7D94;
    }
}

loc_800C7D8C:
{
    r4 = (r30 ^ 1);
    r30 = (r4 & 65535);
}

loc_800C7D94:
{
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_6 & 254);
    r10 = (r10 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C7CE8;
    }
}

loc_800C7DA0:
{
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    r8 = (r8 + 1);
}

loc_800C7DAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
}

loc_800C7DB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C7C78;
    }
}

loc_800C7DB4:
{
    r3 = (r3 + 120);
    ctx->lr = 0x800C7DBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32((r31 + 168));
    r3 = (r30 & 65535);
    ctr = r12;
    ctx->lr = 0x800C7DCCu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800C7DCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C7C40 func_800C7C40 preserves=true fpr_mask=0x00000000
