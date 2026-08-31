#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F8B7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F8B7C;

loc_806F8B7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F8BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8BBC;
    }
}

loc_806F8BAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_806F8D7C;
}

loc_806F8BBC:
{
    r5 = MemoryInline::FlatRead32((r3 + 28));
}

loc_806F8BC4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806F8BF4;
    }
}

loc_806F8BC8:
{
    r5 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806F8BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8BF4;
    }
}

loc_806F8BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8BE0;
    }
}

loc_806F8BD8:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_806F8BE4;
}

loc_806F8BE0:
{
    r0 = -1;
}

loc_806F8BE4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806F8BE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F8BF4;
    }
}

loc_806F8BEC:
{
    r3 = 0;
    goto loc_806F8D7C;
}

loc_806F8BF4:
{
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806F8BFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F8C08;
    }
}

loc_806F8C00:
{
    r3 = 0;
    goto loc_806F8D7C;
}

loc_806F8C08:
{
}

loc_806F8C0C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(84))) {
        goto loc_806F8C34;
    }
}

loc_806F8C10:
{
    r5 = 458752;
    r4 = 1769472;
    r0 = (r5 + 4520);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = (r4 + -8192);
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = MemoryInline::FlatRead32((r4 + 18240));
    // inline leaf 0x80868780 (5 guest instruction(s))
    r4 = 1;
    r0 = 60;
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    // end of inlined leaf 0x80868780
}

loc_806F8C34:
{
    r4 = MemoryInline::FlatRead32((r29 + 32));
}

loc_806F8C3C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F8CBC;
    }
}

loc_806F8C40:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_806F8C48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F8C54;
    }
}

loc_806F8C4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F8C58;
}

loc_806F8C54:
{
    r0 = -1;
}

loc_806F8C58:
{
}

loc_806F8C5C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_806F8CBC;
    }
}

loc_806F8C60:
{
    r0 = MemoryInline::FlatRead8((r29 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F8C68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8C74;
    }
}

loc_806F8C6C:
{
    r3 = 0;
    goto loc_806F8D7C;
}

loc_806F8C74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 28), r4);
    r3 = r29;
    MemoryInline::FlatWrite32((r29 + 32), r0);
    MemoryInline::FlatWrite16((r29 + 38), static_cast<uint16_t>(r31));
    ctx->lr = 0x806F8C8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806F933Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r29 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F8C94:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806F8CB4;
    }
}

loc_806F8C98:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F8CA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8CAC;
    }
}

loc_806F8CA8:
{
    // inline leaf 0x8008E310 (6 guest instruction(s))
}

loc_inl1_0x8008E310:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8008E318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8008E31C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 120), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8008E310;
}

loc_inl1_return:
{
}

loc_inl1_cont_8008E310:
{
    // end of inlined leaf 0x8008E310
}

loc_806F8CAC:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r29 + 38), static_cast<uint16_t>(r0));
}

loc_806F8CB4:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    goto loc_806F8D7C;
}

loc_806F8CBC:
{
    r0 = 2;
    r6 = r29;
    r5 = 0;
    r3 = 0;
    ctr = r0;
}

loc_806F8CD0:
{
    r0 = MemoryInline::FlatRead32((r6 + 20));
}

loc_806F8CD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806F8CEC;
    }
}

loc_806F8CDC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r29 + r0);
    r5 = (r3 + 20);
    goto loc_806F8CF8;
}

loc_806F8CEC:
{
    r6 = (r6 + 4);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806F8CD0;
    }
}

loc_806F8CF8:
{
}

loc_806F8CFC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_806F8D18;
    }
}

loc_806F8D00:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F8D08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8D14;
    }
}

loc_806F8D0C:
{
    r4 = 0;
    ctx->lr = 0x806F8D14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806F8D14:
{
    r5 = MemoryInline::FlatRead32((r29 + 32));
}

loc_806F8D18:
{
    r0 = MemoryInline::FlatRead32((r29 + 32));
    MemoryInline::FlatWrite32((r29 + 28), r5);
}

loc_806F8D24:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_806F8D30;
    }
}

loc_806F8D28:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 32), r0);
}

loc_806F8D30:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite16((r29 + 38), static_cast<uint16_t>(r31));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F8D60;
    }
}

loc_806F8D3C:
{
    r3 = 0x809C0000u;
    r5 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r3 = (r3 + 248);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r29 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x806F8D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806F8D78;
}

loc_806F8D60:
{
    r4 = MemoryInline::FlatRead32((r29 + 28));
    r3 = r29;
    r5 = r30;
    ctx->lr = 0x806F8D70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806F913Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = -1;
    MemoryInline::FlatWrite16((r29 + 38), static_cast<uint16_t>(r0));
}

loc_806F8D78:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
}

loc_806F8D7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F8B7C func_806F8B7C preserves=true fpr_mask=0x00000000
