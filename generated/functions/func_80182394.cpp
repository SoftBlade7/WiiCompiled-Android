#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80182394(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80182394;

loc_80182394:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r6 = 1885929472;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r6 + 25393);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801823AC:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018243C;
    }
}

loc_801823B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801823E0;
    }
}

loc_801823B8:
{
    r6 = 1885405184;
    r0 = (r6 + 28209);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801823C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182408;
    }
}

loc_801823C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018259C;
    }
}

loc_801823CC:
{
    r6 = 1651376128;
    r0 = (r6 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801823D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182544;
    }
}

loc_801823DC:
{
    goto loc_8018259C;
}

loc_801823E0:
{
    r6 = 2003697664;
    r0 = (r6 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801823EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801824EC;
    }
}

loc_801823F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018259C;
    }
}

loc_801823F4:
{
    r6 = 1954021376;
    r0 = (r6 + 29745);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80182400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182494;
    }
}

loc_80182404:
{
    goto loc_8018259C;
}

loc_80182408:
{
    r3 = 0x80340000u;
    r31 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 18848));
    r4 = 212;
    ctx->lr = 0x8018241Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80182420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182434;
    }
}

loc_80182424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801825A0;
    }
}

loc_80182428:
{
    r4 = r31;
    ctx->lr = 0x80182430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801859E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801825A0;
}

loc_80182434:
{
    r3 = 0;
    goto loc_801825A0;
}

loc_8018243C:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80340000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 236;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 56), r8);
    r3 = MemoryInline::FlatRead32((r3 + 18848));
    MemoryInline::FlatWriteRam32((r1 + 60), r7);
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->lr = 0x80182470u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80182474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018248C;
    }
}

loc_80182478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801825A0;
    }
}

loc_8018247C:
{
    r4 = r31;
    r5 = (r1 + 56);
    ctx->lr = 0x80182488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018695Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801825A0;
}

loc_8018248C:
{
    r3 = 0;
    goto loc_801825A0;
}

loc_80182494:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80340000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 256;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 40), r8);
    r3 = MemoryInline::FlatRead32((r3 + 18848));
    MemoryInline::FlatWriteRam32((r1 + 44), r7);
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->lr = 0x801824C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801824CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801824E4;
    }
}

loc_801824D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801825A0;
    }
}

loc_801824D4:
{
    r4 = r31;
    r5 = (r1 + 40);
    ctx->lr = 0x801824E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80186FA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801825A0;
}

loc_801824E4:
{
    r3 = 0;
    goto loc_801825A0;
}

loc_801824EC:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80340000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 260;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    r3 = MemoryInline::FlatRead32((r3 + 18848));
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x80182520u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80182524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018253C;
    }
}

loc_80182528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801825A0;
    }
}

loc_8018252C:
{
    r4 = r31;
    r5 = (r1 + 24);
    ctx->lr = 0x80182538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80188580u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801825A0;
}

loc_8018253C:
{
    r3 = 0;
    goto loc_801825A0;
}

loc_80182544:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80340000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 212;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    r3 = MemoryInline::FlatRead32((r3 + 18848));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80182578u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8018257C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182594;
    }
}

loc_80182580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801825A0;
    }
}

loc_80182584:
{
    r4 = r31;
    r5 = (r1 + 8);
    ctx->lr = 0x80182590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801805A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801825A0;
}

loc_80182594:
{
    r3 = 0;
    goto loc_801825A0;
}

loc_8018259C:
{
    r3 = 0;
}

loc_801825A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80182394 func_80182394 preserves=true fpr_mask=0x00000000
