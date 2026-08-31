#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650274(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80650274;

loc_80650274:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_80650298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806502B0;
    }
}

loc_8065029C:
{
}

loc_806502A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80650580;
    }
}

loc_806502A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_806502A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806506EC;
    }
}

loc_806502AC:
{
    goto loc_80650784;
}

loc_806502B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_806502B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(600))) {
        goto loc_8065034C;
    }
}

loc_806502BC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_806502D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806502DC;
    }
}

loc_806502D4:
{
    r29 = 0;
    goto loc_80650330;
}

loc_806502DC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065032C;
    }
}

loc_806502E8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806502FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80650314;
}

loc_80650300:
{
}

loc_80650304:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80650310;
    }
}

loc_80650308:
{
    r0 = 1;
    goto loc_80650320;
}

loc_80650310:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80650314:
{
}

loc_80650318:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80650300;
    }
}

loc_8065031C:
{
    r0 = 0;
}

loc_80650320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80650324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065032C;
    }
}

loc_80650328:
{
    goto loc_80650330;
}

loc_8065032C:
{
    r29 = 0;
}

loc_80650330:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4204;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8065034Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8065034C:
{
    r3 = 0x809C0000u;
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80650364:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(96))) {
        goto loc_80650370;
    }
}

loc_80650368:
{
}

loc_8065036C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(103))) {
        goto loc_806503C4;
    }
}

loc_80650370:
{
}

loc_80650374:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(88))) {
        goto loc_80650380;
    }
}

loc_80650378:
{
}

loc_8065037C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(89))) {
        goto loc_80650390;
    }
}

loc_80650380:
{
}

loc_80650384:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(94))) {
        goto loc_80650418;
    }
}

loc_80650388:
{
}

loc_8065038C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(95))) {
        goto loc_80650418;
    }
}

loc_80650390:
{
    r4 = 0x809C0000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 64));
    r0 = (1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    goto loc_80650418;
}

loc_806503C4:
{
    r3 = 0x809C0000u;
    r7 = 1;
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r5 = (r0 * 88);
    r3 = (r6 + r5);
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_806503E8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_806503FC;
    }
}

loc_806503EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r0 & 1);
}

loc_806503F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806503FC;
    }
}

loc_806503F8:
{
    r4 = 0;
}

loc_806503FC:
{
}

loc_80650400:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80650418;
    }
}

loc_80650404:
{
    r3 = (r6 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 90));
}

loc_80650410:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80650418;
    }
}

loc_80650414:
{
    r7 = 0;
}

loc_80650418:
{
    r5 = MemoryInline::FlatRead32((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80650420:
{
    r0 = 10800;
    r3 = 0;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r4 + r3);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650440;
    }
}

loc_80650438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065043C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650458;
    }
}

loc_80650440:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x80650454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80656898u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80650784;
}

loc_80650458:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    ctx->lr = 0x80650464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066068Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80650468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650784;
    }
}

loc_8065046C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80662C88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065047C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650784;
    }
}

loc_80650480:
{
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    // inline leaf 0x80660710 (16 guest instruction(s))
}

loc_inl0_0x80660710:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_inl0_0x80660718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80660738;
    }
}

loc_inl0_0x8066071C:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & -2147483648);
}

loc_inl0_0x80660724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80660730;
    }
}

loc_inl0_0x80660728:
{
    r4 = 0;
    goto loc_inl0_0x8066073C;
}

loc_inl0_0x80660730:
{
    r4 = 1;
    goto loc_inl0_0x8066073C;
}

loc_inl0_0x80660738:
{
    r4 = 2;
}

loc_inl0_0x8066073C:
{
    r3 = (2 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + -2);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_80660710:
{
    // end of inlined leaf 0x80660710
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065048C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650784;
    }
}

loc_80650490:
{
    r3 = r31;
    ctx->lr = 0x80650498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80651854u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806504B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_806504BC;
    }
}

loc_806504B4:
{
}

loc_806504B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(99))) {
        goto loc_806504CC;
    }
}

loc_806504BC:
{
}

loc_806504C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(101))) {
        goto loc_80650554;
    }
}

loc_806504C4:
{
}

loc_806504C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(103))) {
        goto loc_80650554;
    }
}

loc_806504CC:
{
    r0 = MemoryInline::FlatRead32((r31 + 644));
    r3 = 0x809C0000u;
    r6 = r31;
    r7 = MemoryInline::FlatRead32((r3 + 8408));
    r8 = 0;
    r9 = 0;
    r5 = 1;
    ctr = r0;
}

loc_806504F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8065053C;
    }
}

loc_806504F4:
{
    r0 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = MemoryInline::FlatRead8((r6 + 500));
    r0 = (r0 * 88);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80650534;
    }
}

loc_80650514:
{
    r0 = MemoryInline::FlatRead32((r6 + 504));
}

loc_8065051C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80650528;
    }
}

loc_80650520:
{
    r8 = 1;
    goto loc_80650534;
}

loc_80650528:
{
}

loc_8065052C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80650534;
    }
}

loc_80650530:
{
    r9 = 1;
}

loc_80650534:
{
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806504F4;
    }
}

loc_8065053C:
{
}

loc_80650540:
{
    r4 = 0;
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80650550;
    }
}

loc_80650548:
{
}

loc_8065054C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80650554;
    }
}

loc_80650550:
{
    r4 = 1;
}

loc_80650554:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80650558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650574;
    }
}

loc_8065055C:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x80650570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80656898u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80650784;
}

loc_80650574:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_80650784;
}

loc_80650580:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80650588:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(600))) {
        goto loc_8065061C;
    }
}

loc_8065058C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_806505A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806505AC;
    }
}

loc_806505A4:
{
    r29 = 0;
    goto loc_80650600;
}

loc_806505AC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806505FC;
    }
}

loc_806505B8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806505CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806505E4;
}

loc_806505D0:
{
}

loc_806505D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806505E0;
    }
}

loc_806505D8:
{
    r0 = 1;
    goto loc_806505F0;
}

loc_806505E0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806505E4:
{
}

loc_806505E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806505D0;
    }
}

loc_806505EC:
{
    r0 = 0;
}

loc_806505F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806505F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806505FC;
    }
}

loc_806505F8:
{
    goto loc_80650600;
}

loc_806505FC:
{
    r29 = 0;
}

loc_80650600:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4204;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8065061Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8065061C:
{
    r29 = 1;
    r30 = 0;
    goto loc_80650650;
}

loc_80650628:
{
    r4 = r30;
    r3 = (r31 + 656);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80650640:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8065064C;
    }
}

loc_80650644:
{
    r29 = 0;
    goto loc_8065065C;
}

loc_8065064C:
{
    r30 = (r30 + 1);
}

loc_80650650:
{
    r0 = MemoryInline::FlatRead32((r31 + 644));
}

loc_80650658:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80650628;
    }
}

loc_8065065C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80650660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650784;
    }
}

loc_80650664:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80650678:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650684;
    }
}

loc_8065067C:
{
    r29 = 0;
    goto loc_806506D8;
}

loc_80650684:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806506D4;
    }
}

loc_80650690:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806506A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806506BC;
}

loc_806506A8:
{
}

loc_806506AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806506B8;
    }
}

loc_806506B0:
{
    r0 = 1;
    goto loc_806506C8;
}

loc_806506B8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806506BC:
{
}

loc_806506C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806506A8;
    }
}

loc_806506C4:
{
    r0 = 0;
}

loc_806506C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806506CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806506D4;
    }
}

loc_806506D0:
{
    goto loc_806506D8;
}

loc_806506D4:
{
    r29 = 0;
}

loc_806506D8:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_80650784;
}

loc_806506EC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x806506F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80656E70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_806506FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650784;
    }
}

loc_80650700:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80650714:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650720;
    }
}

loc_80650718:
{
    r29 = 0;
    goto loc_80650774;
}

loc_80650720:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650770;
    }
}

loc_8065072C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80650740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80650758;
}

loc_80650744:
{
}

loc_80650748:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80650754;
    }
}

loc_8065074C:
{
    r0 = 1;
    goto loc_80650764;
}

loc_80650754:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80650758:
{
}

loc_8065075C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80650744;
    }
}

loc_80650760:
{
    r0 = 0;
}

loc_80650764:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80650768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650770;
    }
}

loc_8065076C:
{
    goto loc_80650774;
}

loc_80650770:
{
    r29 = 0;
}

loc_80650774:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 104), r0);
}

loc_80650784:
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80650274 func_80650274 preserves=true fpr_mask=0x00000000
