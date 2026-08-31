#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065D6E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065D6E4;

loc_8065D6E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r5;
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8065D720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D738;
    }
}

loc_8065D724:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8065D734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065D758;
    }
}

loc_8065D738:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065D748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 4));
    goto loc_8065D784;
}

loc_8065D758:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065D76C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065D780;
    }
}

loc_8065D770:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 20));
    goto loc_8065D784;
}

loc_8065D780:
{
    r4 = 0;
}

loc_8065D784:
{
    r0 = (r28 + -1);
}

loc_8065D78C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8065D7B8;
    }
}

loc_8065D790:
{
    r0 = (r28 + -5);
}

loc_8065D798:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8065D8B4;
    }
}

loc_8065D79C:
{
}

loc_8065D7A0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8065D9B0;
    }
}

loc_8065D7A4:
{
}

loc_8065D7A8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_8065D9B0;
    }
}

loc_8065D7AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_8065D7B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D9B0;
    }
}

loc_8065D7B4:
{
    goto loc_8065D9CC;
}

loc_8065D7B8:
{
}

loc_8065D7BC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(5))) {
        goto loc_8065D7D0;
    }
}

loc_8065D7C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_8065D7C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8065D7D0;
    }
}

loc_8065D7C8:
{
    r3 = 1;
    goto loc_8065D9D0;
}

loc_8065D7D0:
{
}

loc_8065D7D4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(1))) {
        goto loc_8065D8B4;
    }
}

loc_8065D7D8:
{
}

loc_8065D7DC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(3))) {
        goto loc_8065D8B4;
    }
}

loc_8065D7E0:
{
    r3 = 0x809C0000u;
    r0 = (r31 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 200));
    r3 = (16 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(16) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + -16);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_8065D80C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065D81C;
    }
}

loc_8065D810:
{
    r0 = MemoryInline::FlatRead8((r5 + 520));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
}

loc_8065D81C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065D820:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D9D0;
    }
}

loc_8065D824:
{
    r29 = 0x809C0000u;
    r28 = MemoryInline::FlatRead32((r5 + 204));
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8065D83C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D854;
    }
}

loc_8065D840:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8065D850:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065D874;
    }
}

loc_8065D854:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065D864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8065D8A0;
}

loc_8065D874:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065D888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D89C;
    }
}

loc_8065D88C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
    goto loc_8065D8A0;
}

loc_8065D89C:
{
    r0 = 20;
}

loc_8065D8A0:
{
    r3 = (r0 - r28);
    r0 = (r28 - r0);
    r0 = (r3 | r0);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    goto loc_8065D9D0;
}

loc_8065D8B4:
{
}

loc_8065D8B8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(1))) {
        goto loc_8065D8CC;
    }
}

loc_8065D8BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_8065D8C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8065D8CC;
    }
}

loc_8065D8C4:
{
    r3 = 1;
    goto loc_8065D9D0;
}

loc_8065D8CC:
{
}

loc_8065D8D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(5))) {
        goto loc_8065D9B0;
    }
}

loc_8065D8D4:
{
}

loc_8065D8D8:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(7))) {
        goto loc_8065D9B0;
    }
}

loc_8065D8DC:
{
    r3 = 0x809C0000u;
    r0 = (r31 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 200));
    r3 = (16 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(16) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + -16);
    r0 = (r3 | r0);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
}

loc_8065D908:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065D918;
    }
}

loc_8065D90C:
{
    r0 = MemoryInline::FlatRead8((r5 + 520));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
}

loc_8065D918:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065D91C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D9D0;
    }
}

loc_8065D920:
{
    r29 = 0x809C0000u;
    r28 = MemoryInline::FlatRead32((r5 + 204));
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8065D938:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D950;
    }
}

loc_8065D93C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8065D94C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065D970;
    }
}

loc_8065D950:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065D960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8065D99C;
}

loc_8065D970:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065D984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D998;
    }
}

loc_8065D988:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
    goto loc_8065D99C;
}

loc_8065D998:
{
    r0 = 20;
}

loc_8065D99C:
{
    r3 = (r0 - r28);
    r0 = (r28 - r0);
    r0 = (r3 | r0);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    goto loc_8065D9D0;
}

loc_8065D9B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8065D9B4:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D9D0;
    }
}

loc_8065D9BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8065D9C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065D9D0;
    }
}

loc_8065D9C4:
{
    r3 = 1;
    goto loc_8065D9D0;
}

loc_8065D9CC:
{
    r3 = 1;
}

loc_8065D9D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065D6E4 func_8065D6E4 preserves=true fpr_mask=0x00000000
