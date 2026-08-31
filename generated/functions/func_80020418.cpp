#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80020418(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80020418;

loc_80020418:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 25556));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80020430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002051C;
    }
}

loc_80020434:
{
    r4 = 0x802A0000u;
    r5 = 1;
    r4 = (r4 + 25912);
    r0 = MemoryInline::FlatRead32((r4 + 504));
    r0 = (r0 & -1025);
    MemoryInline::FlatWriteRam32((r4 + 504), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800204B0;
    }
}

loc_80020450:
{
    r0 = MemoryInline::FlatRead32((r4 + 760));
    r0 = (r0 & 65535);
}

loc_8002045C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3328))) {
        goto loc_800204B0;
    }
}

loc_80020460:
{
    r3 = (r3 + 25556);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8002046C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002047C;
    }
}

loc_80020470:
{
}

loc_80020474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80020490;
    }
}

loc_80020478:
{
    goto loc_800204B0;
}

loc_8002047C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80020484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800204B0;
    }
}

loc_80020488:
{
    r5 = 0;
    goto loc_800204B0;
}

loc_80020490:
{
    r4 = MemoryInline::FlatRead32((r4 + 128));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8002049C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_800204B0;
    }
}

loc_800204A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_800204A8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_800204B0;
    }
}

loc_800204AC:
{
    r5 = 0;
}

loc_800204B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800204B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800204C8;
    }
}

loc_800204B8:
{
    r3 = 0x802A0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 25556), r0);
    goto loc_8002051C;
}

loc_800204C8:
{
    r5 = 0x802A0000u;
    r4 = 0x802A0000u;
    r3 = (r5 + 25556);
    r6 = 1;
    r4 = (r4 + 25912);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 504));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800204E8:
{
    MemoryInline::FlatWriteRam32((r5 + 25556), r6);
    r0 = (r0 | 1024);
    MemoryInline::FlatWriteRam32((r4 + 504), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020500;
    }
}

loc_800204F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_800204FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80020514;
    }
}

loc_80020500:
{
    r4 = 0x802A0000u;
    r4 = (r4 + 25556);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_80020514:
{
    r3 = 0;
    // inline leaf 0x8002083C (4 guest instruction(s))
    r4 = 0x802A0000u;
    r4 = (r4 + 25744);
    MemoryInline::FlatWriteRam32((r4 + 152), r3);
    // end of inlined leaf 0x8002083C
}

loc_8002051C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 0x802A0000u;
    r3 = MemoryInline::FlatRead32((r3 + 25556));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80020418 func_80020418 preserves=true fpr_mask=0x00000000
