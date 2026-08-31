#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B2234(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B2234;

loc_801B2234:
{
    r6 = 1941307392;
    r0 = 128;
    r11 = (r6 + -9222);
    r9 = 0;
    r12 = 0;
    r6 = 0;
    r10 = 0;
    ctr = r0;
}

loc_801B2254:
{
    r8 = (r10 + -2147483648);
    r8 = MemoryInline::FlatRead8((r8 + 14336));
}

loc_801B2260:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801B22A8;
    }
}

loc_801B2264:
{
    r3_addr_2 = (r3 + r12);
    r7 = MemoryInline::FlatRead8(r3_addr_2);
    r0 = (r8 ^ r11);
    r8 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B2288;
    }
}

loc_801B2278:
{
}

loc_801B227C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(61))) {
        goto loc_801B2288;
    }
}

loc_801B2280:
{
    r9 = 1;
    goto loc_801B2320;
}

loc_801B2288:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r12 + 1);
    r7 = (r8 ^ r7);
    r7 = (r7 & 223);
}

loc_801B2298:
{
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r7 = (r7_rot_2 & 1);
    r7 = (0 - r7);
    r12 = (r0 & r7);
}

loc_801B22A8:
{
    r10 = (r10 + 1);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r8 = (r10 + -2147483648);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r8 = MemoryInline::FlatRead8((r8 + 14336));
    r11 = (r7 | r0);
}

loc_801B22C4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801B230C;
    }
}

loc_801B22C8:
{
    r3_addr_4 = (r3 + r12);
    r7 = MemoryInline::FlatRead8(r3_addr_4);
    r0 = (r8 ^ r11);
    r8 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B22EC;
    }
}

loc_801B22DC:
{
}

loc_801B22E0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(61))) {
        goto loc_801B22EC;
    }
}

loc_801B22E4:
{
    r9 = 1;
    goto loc_801B2320;
}

loc_801B22EC:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r12 + 1);
    r7 = (r8 ^ r7);
    r7 = (r7 & 223);
}

loc_801B22FC:
{
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r7 = (r7_rot_5 & 1);
    r7 = (0 - r7);
    r12 = (r0 & r7);
}

loc_801B230C:
{
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r11 = (r7 | r0);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B2254;
    }
}

loc_801B2320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801B2324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B2398;
    }
}

loc_801B2328:
{
    r10 = (r10 + 1);
    goto loc_801B2388;
}

loc_801B2330:
{
    r3 = (r10 + -2147483648);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_10 & 1);
    r3 = MemoryInline::FlatRead8((r3 + 14336));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r11 = (r7 | r0);
}

loc_801B2348:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801B2368;
    }
}

loc_801B234C:
{
    r0 = (r3 ^ r11);
    r3 = (r0 & 255);
}

loc_801B2358:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(13))) {
        goto loc_801B2364;
    }
}

loc_801B235C:
{
}

loc_801B2360:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_801B2368;
    }
}

loc_801B2364:
{
    r3 = 0;
}

loc_801B2368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B236C:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r6 = (r6 + 1);
    r4 = (r4 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B2384;
    }
}

loc_801B237C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B2384:
{
    r10 = (r10 + 1);
}

loc_801B2388:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(256));
}

loc_801B238C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B2398;
    }
}

loc_801B2390:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_801B2394:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B2330;
    }
}

loc_801B2398:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B2234 func_801B2234 preserves=true fpr_mask=0x00000000
